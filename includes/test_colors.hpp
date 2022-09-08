/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_colors.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:34:17 by rgeny             #+#    #+#             */
/*   Updated: 2022/09/07 17:31:09 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_COLORS_HPP
# define TEST_COLORS_HPP

//	special
# define RESET				"\033[0m"
# define BRIGHT				"\033[1m"
# define DIM				"\033[2m"
# define ITALICS			"\033[3m"
# define UNDERSCORE			"\033[4m"
# define BLINK				"\033[5m"
//# define BLINK			"\033[6m"
# define REVERSE			"\033[7m"
# define HIDDEN				"\033[8m"
# define STRIKETHROUGH		"\033[9m"

# define DOUBLE_UNDERSCORE	"\033[21m"

# define OVERLINE			"\033[53m"

//	text colors
# define BLACK_TEXT			"\033[30m"
# define RED_TEXT			"\033[31m"
# define GREEN_TEXT			"\033[32m"
# define YELLOW_TEXT		"\033[33m"
# define BLUE_TEXT			"\033[34m"
# define MAGENTA_TEXT		"\033[35m"
# define CYAN_TEXT			"\033[36m"
# define WHITE_TEXT			"\033[37m"
# define GREY_TEXT			"\033[90m"
# define RED2_TEXT			"\033[91m"
# define GREEN2_TEXT		"\033[92m"
# define YELLOW2_TEXT		"\033[93m"
# define BLUE2_TEXT			"\033[94m"
# define PINK_TEXT			"\033[95m"
# define CYAN2_TEXT			"\033[96m"
# define WHITE2_TEXT		"\033[97m"

//	background colors
# define BLACK_BACK			"\033[40m"
# define RED_BACK			"\033[41m"
# define GREEN_BACK			"\033[42m"
# define YELLOW_BACK		"\033[43m"
# define BLUE_BACK			"\033[44m"
# define MAGENTA_BACK		"\033[45m"
# define CYAN_BACK			"\033[46m"
# define WHITE_BACK			"\033[47m"
# define GREY_BACK			"\033[100m"
# define RED2_BACK			"\033[101m"
# define GREEN2_BACK		"\033[102m"
# define YELLOW2_BACK		"\033[103m"
# define BLUE2_BACK			"\033[104m"
# define PINK_BACK			"\033[105m"
# define CYAN2_BACK			"\033[106m"
# define WHITE2_BACK		"\033[107m"

#endif
