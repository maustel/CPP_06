/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:28:35 by maustel           #+#    #+#             */
/*   Updated: 2025/04/04 10:28:35 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZER_HPP__
# define __SERIALIZER_HPP__

# include <iostream>
# include "Data.hpp"

/*
As this class doesn’t need to store anything at all, this class must not be instanciable by
users. Therefor constructors and destructors are private
*/
class Serializer
{
	private:
	Serializer();
	~Serializer();
	Serializer(const Serializer& other);
	Serializer& operator=(const Serializer& other);

	public:
	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};

#endif
