/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:10:03 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/04 21:10:03 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::binaryPointPos = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->num = 0;
}

Fixed::Fixed(const Fixed& fixedNum)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedNum;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->num = num << this->binaryPointPos;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->num = roundf(num * (1 << this->binaryPointPos));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& fixedNum)
{
	this->num = fixedNum.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed& fixedNum1, const Fixed& fixedNum2) const
{
	return fixedNum1.toFloat() > fixedNum2.toFloat();
}

bool	Fixed::operator<(const Fixed& fixedNum1, const Fixed& fixedNum2) const
{
	return fixedNum1.toFloat() < fixedNum2.toFloat();
}

bool	Fixed::operator>=(const Fixed& fixedNum1, const Fixed& fixedNum2) const
{
	return fixedNum1.toFloat() >= fixedNum2.toFloat();
}

bool	Fixed::operator<=(const Fixed& fixedNum1, const Fixed& fixedNum2) const
{
	return fixedNum1.toFloat() <= fixedNum2.toFloat();
}

bool	Fixed::operator==(const Fixed& fixedNum1, const Fixed& fixedNum2) const
{
	return fixedNum1.toFloat() == fixedNum2.toFloat();
}

bool	Fixed::operator!=(const Fixed& fixedNum1, const Fixed& fixedNum2) const
{
	return fixedNum1.toFloat() != fixedNum2.toFloat();
}

Fixed	Fixed::operator+(const Fixed& fixedNum1, const Fixed& fixedNum2) const
{
	return Fixed(fixedNum1.toFloat() + fixedNum2.toFloat());
}

Fixed	Fixed::operator-(const Fixed& fixedNum1, const Fixed& fixedNum2) const
{
	return Fixed(fixedNum1.toFloat() - fixedNum2.toFloat());
}

Fixed	Fixed::operator*(const Fixed& fixedNum1, const Fixed& fixedNum2) const
{
	return Fixed(fixedNum1.toFloat() * fixedNum2.toFloat());
}

Fixed	Fixed::operator/(const Fixed& fixedNum1, const Fixed& fixedNum2) const
{
	return Fixed(fixedNum1.toFloat() / fixedNum2.toFloat());
}

int	Fixed::getRawBits(void) const
{
	return this->num;
}

void	Fixed::setRawBits(int const raw)
{
	this->num = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return (float)this->num / (1 << this->binaryPointPos);
}

int		Fixed::toInt(void) const
{
	return this->num >> this->binaryPointPos;
}

std::ostream&	operator<<(std::ostream& ostr, const Fixed& fixedNum)
{
	return ostr << fixedNum.toFloat();
}
