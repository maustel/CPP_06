/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:24:41 by maustel           #+#    #+#             */
/*   Updated: 2025/04/04 10:24:41 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "colors.h"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << RED << "Wrong amount of arguments!" << RESET << std::endl;
		return (1);
	}
	else
		ScalarConverter::convert(argv[1]);
	return (0);
}
