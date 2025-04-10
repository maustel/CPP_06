/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:35:58 by maustel           #+#    #+#             */
/*   Updated: 2025/04/04 10:35:58 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}

void ScalarConverter::convert(std::string value_as_str)
{
	double	value = 0;

	try
	{
		value = convert_value_to_type(value_as_str);
		outputValue(value);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << '\n';
	}
}
