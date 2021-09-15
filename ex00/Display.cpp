/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:25:18 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/15 17:11:39 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Display.hpp"

void    detect_type(std::string arg)
{
	if (is_char(arg))
		from_char(arg[0]);
	else if (is_int(arg))
		from_int(atoi(arg.c_str()));
	else if (is_float(arg))
		from_float(atof(arg.c_str()));
	else if (is_double(arg))
		from_double(atof(arg.c_str()));
	else if (is_specialcase(arg))
		from_specialcase(arg);
		
		
}

void    from_char(char x)
{
	std::cout << "char: '" << x << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(x) << std::endl;
	std::cout << "float: " << static_cast<float>(x) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(x) << ".0" << std::endl;
}

void    from_int(int x)
{
	if (x < 32 || x > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(x) << "'" << std::endl;
	std::cout << "int: " << x << std::endl;
	std::cout << "float: " << static_cast<float>(x) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(x) << ".0" << std::endl;
}

void    from_float(float x)
{
	if (x < 32 || x > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(x) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(x) << std::endl;
	std::cout << "float: " << x << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(x) << ".0" << std::endl;
}

void    from_double(float x)
{
	if (x < 32 || x > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(x) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(x) << std::endl;
	std::cout << "float: " << static_cast<float>(x) << ".0f" << std::endl;
	std::cout << "double: " << x << ".0" << std::endl;
}

void	from_specialcase()
