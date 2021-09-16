/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Display.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:24:43 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/16 14:25:28 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_HPP
# define DISPLAY_HPP

# include <iostream>
# include <type_traits>
# include <ctype.h>
# include <string>
# include <climits>

# define FMAX 340282346638528859811704183484516925440.0000000000000000
# define FMIN -340282346638528859811704183484516925440.0000000000000000

void	detect_type(std::string arg);

bool	is_char(std::string arg);
void    from_char(char x);

bool	is_int(std::string arg);
void    from_int(int x);

bool	is_float(std::string arg);
void    from_float(float x);

bool	is_double(std::string arg);
void    from_double(float x);

bool	is_specialcase(std::string arg);
void	from_specialcase(std::string arg);




#endif
