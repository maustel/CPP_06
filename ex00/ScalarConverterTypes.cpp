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

/*
Converts String-value into double value (double because it can contain all asked values)
std::numeric_limits<double>::quiet_NaN() -> returns nan as value
std::numeric_limits<double>::infinity() -> returns inf as value
*/
double convert_value_to_type(const std::string strValue)
{
	if(isNan(strValue))
		return std::numeric_limits<double>::quiet_NaN();
	else if(isPosInfinite(strValue))
		return std::numeric_limits<double>::infinity();
	else if(isNegInfinite(strValue))
		return -std::numeric_limits<double>::infinity();
	if (isChar(strValue))
		return (convertToChar(strValue));
	else if (isFloat(strValue))
		return (convertToFloat(strValue));
	else if (isDouble(strValue))
		return (convertToDouble(strValue));
	else if (isInt(strValue))
		return (convertToInt(strValue));
	else
		throw std::invalid_argument("Invalid Input!");
}

/*-----------***_____CHAR_____***-----------------------------------*/

/*-------------------------------------------------------------------
A valid character literal must be exactly 1 character long
isprint(value[0])):
-Checks if the character is printable
--------------------------------------------------------------------*/
bool isChar(std::string strValue)
{
	if (strValue.size() == 1 && isprint(strValue[0]) && !std::isdigit(strValue[0]))
		return (true);
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
	return (true);
}

double convertToInt(std::string strValue)
{
	return (std::stoi(strValue));
}

/*-----------***_____FLOAT_____***-----------------------------------*/

/*-------------------------------------------------------------------
std::string::npos -> a special value representing "not found"
--------------------------------------------------------------------*/
bool isFloat(std::string strValue)
{
	if(strValue.find('f') != std::string::npos)
		return (true);
	return (false);
}

double convertToFloat(std::string strValue)
{
	return (std::stof(strValue));
}

// /*-----------***_____DOUBLE_____***-----------------------------------*/

/*-------------------------------------------------------------------
double has only 53 bits of precision (about 15 decimal digits), which is insufficient
to represent 16-digit number accurately.
(float has 31)
The conversion process loses precision because:
Only ~6 significant digits are guaranteed to be precise
The remaining digits are approximated
--------------------------------------------------------------------*/
bool isDouble(std::string strValue)
{
	if(strValue.find('.') != std::string::npos)
		return (true);
	return (false);
}

double convertToDouble(std::string strValue)
{
	return (std::stod(strValue));
}

// /*-----------***_____OTHER_STUFF_____***-----------------------------------*/

/*-------------------------------------------------------------------
Is Not a Number
--------------------------------------------------------------------*/
bool isNan(std::string strValue)
{
	if(strValue == "nanf" || strValue == "nan")
		return (true);
	return (false);
}

/*-------------------------------------------------------------------
Is infinite
--------------------------------------------------------------------*/

bool isPosInfinite(std::string strValue)
{
	if(strValue == "+inff" || strValue == "+inf")
		return (true);
	return (false);
}

bool isNegInfinite(std::string strValue)
{
	if(strValue == "-inff" || strValue == "-inf")
		return (true);
	return (false);
}
