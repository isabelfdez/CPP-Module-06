/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:34:48 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/16 18:05:27 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Classes.hpp"

Base*	generate(void)
{
	int		n = rand() % 3;

	if (n == 0)
	{
		std::cout << "Derived class: A\n";
		return (new A);
	}
	else if (n == 1)
	{
		std::cout << "Derived class: B\n";
		return (new B);
	}
	else
	{
		std::cout << "Derived class: C\n";
		return (new C);
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A\n";
	if (dynamic_cast<B *>(p))
		std::cout << "B\n";
	if (dynamic_cast<C *>(p))
		std::cout << "C\n";
}

void	identify(Base& p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A\n";
	if (dynamic_cast<B *>(&p))
		std::cout << "B\n";
	if (dynamic_cast<C *>(&p))
		std::cout << "C\n";
}

int		main()
{
	srand((unsigned)time(0));

	Base	*base = generate();
	identify(base);
	identify(*base);

	delete base;
}