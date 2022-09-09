#!/bin/bash

###############################################
#################### TESTS ####################
###############################################

declare -a reverse_iterator=(
	"structor structor.cpp srcs/reverse_iterator/"
	"compares_operator compares_operator.cpp srcs/reverse_iterator/"
	"move_operator move_operator.cpp srcs/reverse_iterator/"
	"assign_operator assign_operator.cpp srcs/reverse_iterator/"
	"access_operator access_operator.cpp srcs/reverse_iterator/"
	"traits traits.cpp srcs/reverse_iterator/"
	"protected protected.cpp srcs/reverse_iterator/"
	)

declare -a vector_iterator=(
	"default default.cpp srcs/vector_iterator/"
	"crash_default_end default_end.cpp srcs/vector_iterator/crash_test/"
	"crash_default_empty default_empty.cpp srcs/vector_iterator/crash_test/"
	"crash_default_after_end default_after_end.cpp srcs/vector_iterator/crash_test/"
	"input_output input_output.cpp srcs/vector_iterator/"
	"forward forward.cpp srcs/vector_iterator/"
	"bidirectional bidirectional.cpp srcs/vector_iterator/"
	"random_access random_access.cpp srcs/vector_iterator/"
	"crash_random_access_end random_access_end.cpp srcs/vector_iterator/crash_test/"
	"crash_random_access_empty random_access_empty.cpp srcs/vector_iterator/crash_test/"
	"crash_random_access_after_end random_access_after_end.cpp srcs/vector_iterator/crash_test/"
	"function function.cpp srcs/vector_iterator/"
	"traits iterator_traits.cpp srcs/vector_iterator/"
	"crash_assign_const assign_const.cpp srcs/vector_iterator/crash_test/"
	"protected_member protected.cpp srcs/vector_iterator/"
	)

declare -a vector_test=(
	"size_sample sample.cpp srcs/vector/size/"

	"constructor_int int.cpp srcs/vector/constructor/"
	"constructor_string string.cpp srcs/vector/constructor/"
	"clear clear.cpp srcs/vector/modifiers/"
	"reserve reserve.cpp srcs/vector/modifiers/"
	"crash_reserve_max_size reserve_max_size.cpp srcs/vector/crash_test/"
	"resize resize.cpp srcs/vector/modifiers/"
	"crash_resize_max_size resize_max_size.cpp srcs/vector/crash_test/"
	"insert insert.cpp srcs/vector/modifiers/"
	"erase erase.cpp srcs/vector/modifiers/"
	"assign assign.cpp srcs/vector/modifiers/"
	"crash_erase_before_begin erase_before_begin.cpp srcs/vector/crash_test/"
	"crash_erase_after_end erase_after_end.cpp srcs/vector/crash_test/"
	"push_back push_back.cpp srcs/vector/modifiers/"
	"pop_back pop_back.cpp srcs/vector/modifiers/"
 	"crash_pop_back_empty pop_back_empty.cpp srcs/vector/crash_test/"
	"swap swap.cpp srcs/vector/modifiers/"
	"operator= operator=.cpp srcs/vector/modifiers/"
	"at at.cpp srcs/vector/access/"
	"operator[] operator[].cpp srcs/vector/access/"
	"crash_operator[]_empty operator[]_empty.cpp srcs/vector/crash_test/"
	"crash_operator[]_out_of_size operator[]_out_of_size.cpp srcs/vector/crash_test/"
	"front front.cpp srcs/vector/access/"
	"crash_front_empty front_empty.cpp srcs/vector/crash_test/"
	"back back.cpp srcs/vector/access/"
	"crash_back_empty back_empty.cpp srcs/vector/crash_test/"
	"data data.cpp srcs/vector/access/"
	"operator operator.cpp srcs/vector/"
	"big_size big_size.cpp srcs/vector/"
	)

declare -a stack_test=(
	"member_types member_types.cpp srcs/stack/"
	"crash_test_const_reference crash_const_reference.cpp srcs/stack/"
	"member_objects member_objects.cpp srcs/stack/"
	"structor structor.cpp srcs/stack/"
	"crash_test_top crash_top.cpp srcs/stack/"
	"pop_empty pop_empty.cpp srcs/stack/"
	"big_size big_size.cpp srcs/stack/"
	"member_function member_function.cpp srcs/stack/"
	"operator= operator=.cpp srcs/stack/"
	"relationnal_operator relationnal_operator.cpp srcs/stack/"
	)

declare -a other_test=(
	"test test.cpp ./"
	)

declare -A lib_test=(
	['stack']="${stack_test[@]}"
	['vector']="${vector_test[@]}" 
	['vector_iterator']="${vector_iterator[@]}"
	['reverse_iterator']="${reverse_iterator[@]}"
	['other']="${other_test[@]}"
	)

declare -a test_name=(
	"stack"
	"vector"
	"vector_iterator"
	"reverse_iterator"
#	"other"
	)

###############################################
##################### VARS ####################
###############################################

##### TESTS VARS #####
TESTS_DIR=tests/
N_PAR=3
LINE_DEL=14

##### SCRIPT VARS #####
TIMEOUT="timeout 0s"
TIMEOUT_RET="124"
DEL_PRINT="1>/dev/null 2>/dev/null"
OPT_LIST=$*
SCRIPT=$(basename "$0")

##### LOGS #####
EXE_DIR=exe/
LOGS_DIR=logs/
CUR_LOGS_DIR=$(2>/dev/null ls $LOGS_DIR | wc -w)

if [ $CUR_LOGS_DIR -lt 10 ]
then
	CUR_LOGS_DIR="000$CUR_LOGS_DIR"
elif [ $CUR_LOGS_DIR -lt 100 ]
then
	CUR_LOGS_DIR="00$CUR_LOGS_DIR"
elif [ $CUR_LOGS_DIR -lt 1000 ]
then
	CUR_LOGS_DIR="0$CUR_LOGS_DIR"
fi
CUR_LOGS_DIR=$LOGS_DIR$CUR_LOGS_DIR

TEST_LOG_DIR="$CUR_LOGS_DIR/\$1/"
LOG_FT="result.log"
LOG_STD="research.log"
LOG_TEST="test.cpp"
ERR_FT="result.err"
ERR_STD="research.err"

##### MAKEFILE VARS #####
STD_EXE="$EXE_DIR\$3\$STD_PREFIX\$1"
FT_EXE=$EXE_DIR\$3\$FT_PREFIX\$1
STD_PREFIX="std_"
FT_PREFIX="ft_"
TEST="\$2"
STDF="STD_FLAG=-DNAMESPACE=std SRCS=$TEST EXE=$STD_EXE"
FTF="SRCS=$TEST EXE=$FT_EXE"

DEBUG_PREFIX="debug_"

##### COLOR VARS #####
BRIGHT="\033[1m"
RED="\033[0;31m"
GREEN="\033[0;32m"
YELLOW="\033[0;33m"
BLUE="\033[0;34m"
PURPLE="\033[0;35m"
CYAN="\033[0;36m"
WHITE="\033[0;37m"
RESET="\033[0m"

##### ERROR VARS #####
declare PRINT_ERR="echo $SCRIPT: line \$i: Function require the"
declare RETURN_ERR="return 2"
declare -A FCT_ERR=(
	['1']="$PRINT_ERR name of the test; $RETURN_ERR"
	['2']="$PRINT_ERR name of the main test; $RETURN_ERR"
	['3']="$PRINT_ERR path of the main test; $RETURN_ERR" )
declare -A ERR=(
	['1']="return 0"
	['2']="exit" )


###############################################
##################### OPT #####################
###############################################

function get_opt()
{
	if [ "$OPT_LIST" == "" ]
	then
		if [ "$*" == "" ]
		then
			return 1
		fi
		return 0
	fi

	for i in $OPT_LIST
	do
		for j in $*
		do
			if [ "$j" == "$i" ]
			then
				return 1
			fi
		done
	done
	return 0
}

get_opt "-h" "--help"
if [ "$?" == "1" ]
then
	echo "Options :"
	echo "	--help (-h)"
	echo "	--verbose (-v)"
	echo "	--verbose_time (-vt)"
	echo "	--stop (-s)"
	echo "	--logclean (-lc)"
	echo "	--clean (-c)"
	echo "	--fclean (-fc)"
	echo "	--test (-t)"
	echo "	--subtest (-st)"
	echo "	--debug (-d)"
	echo "test options :"
	for ((i = 0; i < ${#test_name[@]}; i++))
	do
		echo "	${test_name[$i]}"
		echo "	subtest options :"
		k=0
		for j in ${lib_test[${test_name[$i]}]}
		do
			k=$(expr $k + 1)
			if [ "$k" == "1" ]
			then
				echo " 		$j"
			elif [ "$k" == "$N_PAR" ]
			then
				k=0;
			fi
		done
	done
	exit
fi

declare -A opt_lst=(
	["verbose1"]="printf \$BLUE\"TEST\n\"
					eval cat \$3\$TEST | sed 1,${LINE_DEL}d
					printf \$BLUE\"\nSTD (time : \$STD_TIME ms)\n\"
					printf \$GREEN\"\nFT (time : \$FT_TIME ms)\n\"
					printf \"${BLUE}STD\t\t\t\t\t\t\t\t${GREEN}FT\n\"
					eval diff -y \$TEST_LOG_DIR\$LOG_STD \$TEST_LOG_DIR\$LOG_FT
					printf \$RESET"
	["verbose_time1"]="printf \$BLUE\"(std_time : \$STD_TIME ms)\"\$GREEN\"(ft_time : \$FT_TIME ms)\n\$RESET\""
	["stop1"]="exit"
	["subtest1"]="get_opt \"\$1\"; if [ "\$?" == "0" ]; then return 0; fi" )

get_opt "-lc" "--logclean"
if [ "$?" == "1" ]
then
	rm -rf $LOGS_DIR
fi

get_opt "-fc" "--fclean"
if [ "$?" == "1" ]
then
	make fclean
fi

get_opt "-c" "--clean"
if [ "$?" == "1" ]
then
	make clean
fi

get_opt "-lc" "--logclean" "-fc" "--fclean" "-c" "--clean"
if [ "$?" == "1" ]
then
	exit
fi

get_opt	"-v" "--verbose"
VERBOSE="verbose$?"

get_opt "-vt" "--verboser_time"
VERBOSE_TIME="verbose_time$?"

get_opt "-s" "--stop"
STOP="stop$?"

get_opt "-t" "--test"
FTEST="$?"

get_opt "-st" "--subtest"
SUBTEST="subtest$?"

get_opt "-d" "--debug"
if [ "$?" == "1" ]
then
	STDF+=" DEBUG_FLAG=-D__DEBUG__=42"
	FTF+=" DEBUG_FLAG=-D__DEBUG__=42"
	STD_PREFIX+=$DEBUG_PREFIX
	FT_PREFIX+=$DEBUG_PREFIX
fi

###############################################
################ FUNCTION TEST ################
###############################################


function	save_log()
{
	eval "mkdir -p $TEST_LOG_DIR"
	eval "echo \"$FT\" > $TEST_LOG_DIR$LOG_FT"
	eval "echo \"$STD\" > $TEST_LOG_DIR$LOG_STD"
	eval "cat \"$3$TEST\" > $TEST_LOG_DIR$LOG_TEST"
	eval "cp $STD_EXE $TEST_LOG_DIR" 2>/dev/null
	eval "cp $FT_EXE $TEST_LOG_DIR" 2>/dev/null
#	eval "mv $STD_EXE $TEST_LOG_DIR"
#	eval "mv $FT_EXE $TEST_LOG_DIR"
	eval "mv $ERR_STD $TEST_LOG_DIR"
	eval "mv $ERR_FT $TEST_LOG_DIR"
}

function	do_test()
{
	TIME=$(date +"%s%N")
	STD=$EXE_DIR$3std_$1
	STD=$(2>>$ERR_STD eval $TIMEOUT valgrind ./$STD_EXE)
	STD_RET="$?"
	STD_TIME=$(expr $(date +"%s%N") / 1000000 - $TIME / 1000000)
	STD_ERROR=$(cat $ERR_STD | grep "usage" | awk '{ printf (($5 - $7)) }')
	STD_INVALID=$(cat $ERR_STD | grep -E "Invalid|Conditional|Use\ of\ uninitialised")

	TIMEOUT="timeout $(expr $STD_TIME / 50 + 1)s"

	TIME=$(date +"%s%N")
	FT=$(2>>$ERR_FT eval $TIMEOUT valgrind ./$FT_EXE)
	FT_RET="$?"
	FT_TIME=$(expr $(date +"%s%N") / 1000000 - $TIME / 1000000)
	FT_ERROR=$(cat $ERR_FT | grep "usage" | awk '{ printf (($5 - $7)) }')
	FT_INVALID=$(cat $ERR_FT | grep -E "Invalid|Conditional|Use\ of\ uninitialised")

	DIFF_TIME=$(expr $STD_TIME \* 20)
	DIFF_TIME=$(($FT_TIME > $DIFF_TIME))
}

function	check_result()
{
	if [ "$MAKE_STD_ERROR" != "$MAKE_FT_ERROR" ]
	then
		printf "$1:$RED Ko (Compile error)\n$RESET"
		if [ "$VERBOSE" == "verbose1" ]
		then
			printf "$BLUE\STD\t$RED\FT"
			eval diff -y $TEST_LOG_DIR$ERR_STD $TEST_LOG_DIR$ERR_FT
			printf $RESET
		fi
		${opt_lst[$STOP]}
	elif ([ "$MAKE_STD_ERROR" != "0" ] &&
			[ "$MAKE_STD_ERROR" == "$MAKE_FT_ERROR" ]) ||
		 ([ "$STD_ERROR" != "0" ] &&
		 	[ "$STD_ERROR" == "$FT_ERROR" ]) ||
		 ([ "$STD_RET" != "0" ] &&
		 	[ "$STD_RET" == "$FT_RET" ]) ||
		 ([ "$STD_INVALID" != "" ] &&
		 	[ "$FT_INVALID" != "" ])
	then
		printf "$1:$GREEN Ok (Same error)\n$RESET"
		eval "${opt_lst[$VERBOSE_TIME]}"
	elif [ "$STD_INVALID" == "" ] &&
		  [ "$FT_INVALID" != "" ]
	then
#		TEST
		printf $BLUE"TEST\n"
		eval "cat $3$TEST | sed 1,${LINE_DEL}d"
		printf $RESET

#		FT
		printf "$1:$RED Ko\n"
		eval cat $TEST_LOG_DIR$ERR_FT
		printf "$RESET\n"

		${opt_lst[$STOP]}
	elif [ "$STD" != "$FT" ] ||
		[ "$FT_RET" == "$TIMEOUT_RET" ]
	then
		printf $1":"$RED" Ko "
		printf "$RESET\n"
#		TEST
		printf $BLUE"TEST\n"
		eval "cat $3$TEST | sed 1,${LINE_DEL}d"
		printf $RESET

#		STD
		printf $GREEN"\nSTD (time : $STD_TIME ms)\n"
		if [ "$STD_RET" == "$TIMEOUT_RET" ]
		then
			printf "timeout\n"$RESET
#		else
#			printf "$STD\n"$RESET
		fi

#		FT
		printf $RED"\nFT (time : $FT_TIME ms)\n"
		if [ "$FT_RET" == "$TIMEOUT_RET" ]
		then
			printf "timeout\n"$RESET
#		else
#			printf "$FT\n"$RESET
		fi

		if [ "$STD_RET" != "$TIMEOUT_RET" ] &&
			[ "$FT_RET" != "$TIMEOUT_RET" ]
		then
			printf "${BLUE}STD\t\t\t\t\t\t\t\t${RED}FT\n"
			eval diff -y $TEST_LOG_DIR$LOG_STD $TEST_LOG_DIR$LOG_FT
		fi
		printf $RESET

		${opt_lst[$STOP]}
	elif [ "$FT_ERROR" != "$STD_ERROR" ]
	then
		printf "$1:$RED Ko (Memory leak)\n$RESET"
		if [ "$VERBOSE" == "verbose1" ]
		then
			printf "$BLUE\STD\t$RED\FT\n"
			eval diff -y $TEST_LOG_DIR$ERR_STD $TEST_LOG_DIR$ERR_FT
			printf $RESET
		fi
		${opt_lst[$STOP]}
	elif [ "$DIFF_TIME" == "1" ]
	then
		printf "$1:$RED Ko (Too long)\n$RESET"

#		TEST
		printf $BLUE"TEST\n"
		eval "cat $3$TEST | sed 1,${LINE_DEL}d"
		printf $RESET

		printf $GREEN"\nSTD (time : $STD_TIME ms)\n"
		printf $RED"\nFT (time : $FT_TIME ms)\n$RESET"
	else
		printf $1": "$GREEN"Ok"$RESET"\n"
		eval "${opt_lst[$VERBOSE_TIME]}"
		eval "${opt_lst[$VERBOSE]}"
	fi
}

function	test()
{
#	CHECK PARAMETERS
	eval "${opt_lst[$SUBTEST]}"
	(eval make -j $STDF PREFIX=$STD_PREFIX MAKE_DIR="$3") 1>/dev/null 2>$ERR_STD
	MAKE_STD_ERROR="$?"
	(eval make -j $FTF PREFIX=$FT_PREFIX MAKE_DIR="$3") 1>/dev/null 2>$ERR_FT
	MAKE_FT_ERROR="$?"
	do_test $*
	save_log $*
	check_result $*
}

function	is_called_test()
{
	if [ "$1" == "" ]
	then
		printf "$SCRIPT: line $BASH_LINENO: Function require the name of the test\n"
		exit
	fi

	if [ "$FTEST" == "1" ]
	then
		get_opt "$1"
		if [ "$?" == "1" ]
		then
			printf "\n$BRIGHT***** TEST $1 *****\n$RESET"
			return 1
		fi
		return 0
	else
		printf "\n$BRIGHT***** TEST $1 *****\n$RESET"
		return 1
	fi
}

function	main()
{
	mkdir -p $LOGS_DIR
	mkdir $CUR_LOGS_DIR
	for ((k = 0; k < ${#test_name[@]}; k++))
	do
		is_called_test ${test_name[$k]}
		if [ "$?" == "1" ]
		then
			m=0
			for l in ${lib_test[${test_name[$k]}]}
			do
				m=$(expr $m + 1)
				ARG+="$l "
				if [ "$m" == "$N_PAR" ]
				then
					TEST_LOG_DIR="$CUR_LOGS_DIR/${test_name[$k]}/\$1/"
					test $ARG
					m=0
					ARG=""
				fi
			done
		fi
	done
}

main
