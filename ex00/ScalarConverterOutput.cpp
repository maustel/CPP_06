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
#include "ScalarConverterTypes.hpp"
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
	if (std::isnan(value) || value < 0 || value > 127)
		std::cout << YEL << "char: " << "impossible" << RESET << std::endl;
	else if (isprint(static_cast<int>(value)))
		std::cout << YEL << "char: " << static_cast<char>(value) << RESET << std::endl;
	else
		std::cout << YEL << "char: " << "Non displayable" << RESET << std::endl;
}

void outputInt(double value)
{
	if (std::isfinite(value) &&	value >= std::numeric_limits<int>::min() &&
		value <= std::numeric_limits<int>::max())
			std::cout << BLU << "int: " << static_cast<int>(value) << RESET << std::endl;
	else
		std::cout << BLU << "int: " << "impossible" << RESET << std::endl;
}
/*
std::setprecision(1) sets the floating-point precision to 1 decimal place
std::fixed forces floating-point numbers to be displayed in fixed-point
	notation rather than scientific notation
*/
void outputFloat(double value)
{
	std::cout << MAG << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << RESET << std::endl;
}

void outputDouble(double value)
{
	std::cout << GRN << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(value) << RESET << std::endl;
}
