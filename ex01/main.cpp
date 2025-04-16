/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:19:43 by maustel           #+#    #+#             */
/*   Updated: 2025/04/16 15:19:43 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "colors.h"

int main()
{
	Data data;

	data.f = 42.2f;
	data.i = 42;
	data.str = "I am a string";

	std::cout << MAG << "---Data struct before serialization---" << RESET << std::endl;
	std::cout << "Adress: " << &data << "\nfloat: " << data.f << "\nint: "
	<< data.i << "\nstring: " << data.str << std::endl;

	uintptr_t ptr = Serializer::serialize(&data);

	std::cout << GRN << "---Data address after serialization---" << RESET << std::endl;
	std::cout << "in dec format:" << ptr << std::endl;
	std::cout << "in hex format: 0x" << std::hex << ptr << std::dec << std::endl;

	Data *deserialized = Serializer::deserialize(ptr);

	std::cout << BLU << "---Data struct after deserialization---" << RESET << std::endl;
	std::cout << "Adress: " << deserialized << "\nfloat: " << deserialized->f << "\nint: "
		<< deserialized->i << "\nstring: " << deserialized->str << std::endl;

	return (0);
}
