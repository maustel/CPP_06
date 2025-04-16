/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:35:58 by maustel           #+#    #+#             */
/*   Updated: 2025/04/04 10:35:58 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{}

Serializer::~Serializer()
{}

Serializer::Serializer(const Serializer &other)
{
	(void)other;
}

Serializer &Serializer::operator=(const Serializer &other)
{
	(void)other;
	return (*this);
}

/*
takes a pointer and converts it to the unsigned integer type uintptr_t.

[uintptr_t] is an unsigned integer type that is guaranteed to be large enough to hold a pointer value
It's specifically designed for safely storing and manipulating memory addresses
in a portable way across different platforms and architectures.

[Serialization] is the process of converting objects or data structures into a
format that can be written to a file or transmitted across a network

[reinterpret_cast] to perform type conversions on UNRELATED TYPES. should
	use this type of cast only when absolutely necessary.
*/
uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

/*
It takes an unsigned integer parameter and converts it to a pointer to Data.
*/
Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
