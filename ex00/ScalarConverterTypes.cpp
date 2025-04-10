/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterTypes.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:10:15 by maustel           #+#    #+#             */
/*   Updated: 2025/04/10 12:10:15 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverterTypes.hpp"

double convert_value_to_type(const std::string strValue)
{
	if (isChar(strValue))
		return (convertToChar(strValue));
	else if (isInt(strValue))
		return (convertToInt(strValue));
	// else if (isFloat(strValue))
	// 	return (convertToFloat(strValue));
	// else if (isDouble(strValue))
	// 	return (convertToDouble(strValue));
	// else if (isNegInfinite(strValue))
	// 	return; //somerthing
	// else if (isPosInfinite(strValue))
	// 	return; //somerthing
	// else if (isNotANumber(strValue))
	// 	return ;//somerthing
	else
		throw std::invalid_argument("Invalid Input!");
}

/*-----------***_____CHAR_____***-----------------------------------*/

/*-------------------------------------------------------------------
A valid character literal must be exactly 3 characters long
Example: 'a' consists of:
- Opening single quote (first character)
- The actual character (second character)
- Closing single quote (third character)
isprint(value[1])):
-Checks if the middle character is printable
--------------------------------------------------------------------*/
bool isChar(std::string strValue)
{
	if (strValue.size() == 1 && isprint(strValue[0]) && !std::isdigit(strValue[0]))
	{
		std::cout << "type is char." << std::endl;
		return (true);
	}
	else
	return (false);
}

double convertToChar(std::string strValue)
{
	return (static_cast<double>(strValue[0]));
}

/*-----------***_____INT_____***-----------------------------------*/

bool isInt(std::string strValue)
{
	size_t i = 0;
	while(strValue[i] == '+' || strValue[i] == '-')
	i++;
	while (i < strValue.length())
	{
		if (!std::isdigit(strValue[i]))
		return (false);
		i++;
	}
	std::cout << "type is int." << std::endl;
	return (true);
}

double convertToInt(std::string strValue)
{
	//do something to handle big numbers
	return (std::stoi(strValue));
}

/*-----------***_____FLOAT_____***-----------------------------------*/

bool isFloat(std::string strValue)
{
	//todo
}

double convertToFloat(std::string strValue)
{
	//todo
}

/*-----------***_____DOUBLE_____***-----------------------------------*/

bool isDouble(std::string strValue)
{
	//todo
}

double convertToDouble(std::string strValue)
{
	//todo
}

/*-----------***_____OTHER_STUFF_____***-----------------------------------*/

bool isNotANumber(std::string strValue)
{
	//todo
}

bool isPosInfinite(std::string strValue)
{
	//todo
}

bool isNegInfinite(std::string strValue)
{
	//todo
}
