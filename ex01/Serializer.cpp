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
It takes a pointer and converts it to the unsigned integer type uintptr_t.
*/
uintptr_t Serializer::serialize(Data *ptr)
{

}

/*
It takes an unsigned integer parameter and converts it to a pointer to Data.
*/
Data *Serializer::deserialize(uintptr_t raw)
{

}
