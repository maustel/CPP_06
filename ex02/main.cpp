/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:28:44 by maustel           #+#    #+#             */
/*   Updated: 2025/04/16 16:28:44 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Dynamic cast is a C++ operator that performs type-safe casting of pointers and references
within an inheritance hierarchy at runtime.
It's the safest way to convert between base and derived class types, but should be used sparingly.
When to use it
    Downcasting: When you need to access derived class members from a base class pointer/reference
    Type checking: When you need to verify an object's actual type at runtime
    Legacy code: When working with existing code that requires type checking
    Framework integration: When implementing frameworks that need to handle different object types
Use it sparingly - prefer polymorphism when possible
*/

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "colors.h"
#include <iostream>

Base* generate(void)
{
	srand(time(0));
	int random = rand() % 3;
	std::cout << "random number: " << random << std::endl;
	if (random == 0)
		return (new A);
	else if (random == 1)
		return (new B);
	else
		return (new C);
}

/*--------------------------------------------------------------
When dynamic_cast fails, it returns nullptr for pointer types
When trying to cast to an unrelated derived class, dynamic_cast
fails because the object isn't actually of that type.
(dynamic_cast<A*>(p) -> if p is of type B or C, it fails)
This is a fundamental type safety check that prevents incorrect type conversions.
*--------------------------------------------------------------*/
void identify(Base* p)
{
	std::cout << "Object is of type ";
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "either A, B nor C" << std::endl;
}

/*-----------------------------------------------------------------
Since references cannot be NULL, we have to check with try and catch
subject says Using a pointer inside this function is forbidden.
*--------------------------------------------------------------*/
void identify(Base& p)
{
	std::cout << "Object is of type ";
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (const std::bad_cast&) {}
	try {
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (const std::bad_cast&) {}
	try {
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (const std::bad_cast&) {}
	std::cout << "either A, B nor C" << std::endl;
}

int main()
{
	Base *obj;

	std::cout << MAG << "[Generating object of random class]" << RESET << std::endl;
	obj = generate();
	std::cout << MAG << "[Find out object class using pointer to object]" << RESET << std::endl;
	identify(obj);
	std::cout << MAG << "[Find out object class using reference to object]" << RESET << std::endl;
	identify(*obj);
}
