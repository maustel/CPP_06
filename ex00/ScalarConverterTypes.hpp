/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverterTypes.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:29:21 by maustel           #+#    #+#             */
/*   Updated: 2025/04/10 11:29:21 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTERTYPES_HPP__
# define __SCALARCONVERTERTYPES_HPP__

# include <iostream>
# include <cmath>

double convert_value_to_type(const std::string strValue);

bool	isChar(const std::string strValue);
bool	isInt(const std::string strValue);
bool	isFloat(const std::string strValue);
bool	isDouble(const std::string strValue);
bool	isNan(const std::string strValue);
bool	isPosInfinite(const std::string strValue);
bool	isNegInfinite(const std::string strValue);

double	convertToChar(const std::string strValue);
double	convertToInt(const std::string strValue);
double	convertToFloat(const std::string strValue);
double	convertToDouble(const std::string strValue);

#endif
