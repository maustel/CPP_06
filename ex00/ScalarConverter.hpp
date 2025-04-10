/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:28:35 by maustel           #+#    #+#             */
/*   Updated: 2025/04/04 10:28:35 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER_HPP__
# define __SCALARCONVERTER_HPP__

# include <iostream>
# include "ScalarConverterOutput.hpp"
# include "ScalarConverterTypes.hpp"
# include "colors.h"

/*
As this class doesn’t need to store anything at all, this class must not be instanciable by
users. Therefor constructors and destructors are private
*/
class ScalarConverter
{
	private:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	ScalarConverter& operator=(const ScalarConverter& other);

	public:
	static void convert(std::string str);
};

#endif
