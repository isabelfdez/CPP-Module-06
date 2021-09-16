/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:55:49 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/16 15:23:17 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	rtrn;
	void*		aux;

	aux = reinterpret_cast<void*>(ptr);
	rtrn = reinterpret_cast<uintptr_t>(aux);
	return (rtrn);
}

Data*		deserialize(uintptr_t raw)
{
	void*		aux;
	Data*		d;

	aux = reinterpret_cast<void*>(raw);
	d = reinterpret_cast<Data*>(aux);
	return (d);
}

int			main()
{
	Data		d;
	uintptr_t	i;

	d.n = 9;
	std::cout << d.n << std::endl;
	std::cout << &d << std::endl;

	i = serialize(&d);
	
	Data*		d2 = deserialize(i);
	std::cout << d2->n << std::endl;
	std::cout << d2 << std::endl;

}