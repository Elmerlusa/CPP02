/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:10:17 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/04 21:10:17 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

int main( void ) {
	Fixed a(5.5F);
	Fixed const b(2);
	
	std::cout << "VALOR DE A: " << a << std::endl;
	std::cout << "VALOR DE B: " << b << std::endl;
	std::cout << "A MENOR QUE B: " << (a < b) << std::endl;
	std::cout << "A MAYOR QUE B: " << (a > b) << std::endl;
	std::cout << "A MENOR O IGUAL QUE B: " << (a <= b) << std::endl;
	std::cout << "A MAYOR O IGUAL QUE B: " << (a >= b) << std::endl;
	std::cout << "A IGUAL QUE B: " << (a == b) << std::endl;
	std::cout << "A DISTINTO QUE B: " << (a != b) << std::endl;

	std::cout << "A + B: " << (a + b) << std::endl;
	std::cout << "A - B: " << (a - b) << std::endl;
	std::cout << "A * B: " << (a * b) << std::endl;
	std::cout << "A / B: " << (a / b) << std::endl;

	std::cout << "PREINCREMENTO DE A: " << ++a << std::endl;
	std::cout << "POSTINCREMENTO DE A: " << a++ << std::endl;
	std::cout << "PREDECREMENTO DE A: " << --a << std::endl;
	std::cout << "POSTDECREMENTO DE A: " << a-- << std::endl;

	std::cout << "MIN: " << Fixed::min(a, b) << std::endl;
	std::cout << "MAX: " << Fixed::max(a, b) << std::endl;
	return 0;
}
