/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterOutput.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:10:04 by maustel           #+#    #+#             */
/*   Updated: 2025/04/10 12:10:04 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverterOutput.hpp"
#include "colors.h"

void outputValue(double value)
{
	outputChar(value);
	outputInt(value);
	outputFloat(value);
	outputDouble(value);
}

void outputChar(double value)
{
	if (isprint(static_cast<int>(value)))
		std::cout << YEL << "char: " << static_cast<char>(value) << RESET << std::endl;
	else
		std::cout << YEL << "char: " << "Non displayable" << RESET << std::endl;

}

void outputInt(double value)
{
	std::cout << BLU << "int: " << static_cast<int>(value) << RESET << std::endl;
}

void outputFloat(double value)
{
	//do more stuff
	std::cout << MAG << "float: " << static_cast<float>(value) << RESET << std::endl;
}

void outputDouble(double value)
{
	//todo
}
