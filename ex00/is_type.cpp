/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_type.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:29:06 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/15 17:10:17 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Display.hpp"

bool	is_char(std::string arg)
{
	if (!(isalpha(arg[0]) || arg[0] == 32))
		return (0);
	int		i = 1;
	while (arg[i])
	{
		if (!isprint(arg[i]))
			return (0);
		i++;
	}
	if (arg == "nan" || arg == "nanf")
		return (0);
	return (1);
}

bool    is_int(std::string arg)
{
	int		i = 0;

	if (arg[i] && (arg[i] == '-' || arg[i] == '+'))
		i++;
	while (arg[i])
	{
		if (!isdigit(arg[i]))
			return (0);
		i++;
	}
	
	long int	nb = std::stol(arg);
	if (nb >  INT_MAX || nb < INT_MIN)
		return (0);
	return (1);
}

bool	is_float(std::string arg)
{
	int		i = 0;
	int		icpy = 0;

	if (arg[i] && (arg[i] == '-' || arg[i] == '+'))
		i++;
	while (arg[i])
		i++;
	if (arg[i - 1] != 'f')
		return (0);
	while (icpy < i - 1)
	{
		if (!isdigit(arg[icpy]))
			return (0);
		icpy++;
	}
	double	nb = atof(arg.c_str());
	if (nb > FMAX || nb < FMIN)
		return (0);
	return (1);
}

bool	is_double(std::string arg)
{
	int		i = 0;

	if (arg[i] && (arg[i] == '-' || arg[i] == '+'))
		i++;
	while (arg[i])
	{
		if (!isdigit(arg[i]))
			return (0);
		i++;
	}
	return (1);
}

bool	is_specialcase(std::string arg)
{
	if (arg == "nan" || arg == "nanf" || arg == "inf" || arg == "inff")
		return (1);
	return (0);
}

