/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:37:04 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/16 17:55:30 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
# define CLASSES_HPP

# include <cstdlib> 
# include <ctime> 
# include <iostream>

class Base
{
	public:
		virtual ~Base() { };
};

class A: public Base { };

class B: public Base { };

class C: public Base { };

#endif