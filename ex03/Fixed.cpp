/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:44:15 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/21 18:44:15 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::binaryPointPos = 8;

Fixed::Fixed(void)
{
	this->num = 0;
}

Fixed::Fixed(const Fixed& fixedNum)
{
	*this = fixedNum;
}

Fixed::Fixed(const int num)
{
	this->num = num << this->binaryPointPos;
}

Fixed::Fixed(const float num)
{
	this->num = roundf(num * (1 << this->binaryPointPos));
}

Fixed::~Fixed(void)
{
}

Fixed&	Fixed::operator=(const Fixed& fixedNum)
{
	this->num = fixedNum.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed& fixedNum) const
{
	return this->toFloat() > fixedNum.toFloat();
}

bool	Fixed::operator<(const Fixed& fixedNum) const
{
	return this->toFloat() < fixedNum.toFloat();
}

bool	Fixed::operator>=(const Fixed& fixedNum) const
{
	return this->toFloat() >= fixedNum.toFloat();
}

bool	Fixed::operator<=(const Fixed& fixedNum) const
{
	return this->toFloat() <= fixedNum.toFloat();
}

bool	Fixed::operator==(const Fixed& fixedNum) const
{
	return this->toFloat() == fixedNum.toFloat();
}

bool	Fixed::operator!=(const Fixed& fixedNum) const
{
	return this->toFloat() != fixedNum.toFloat();
}

Fixed	Fixed::operator+(const Fixed& fixedNum) const
{
	return Fixed(this->toFloat() + fixedNum.toFloat());
}

Fixed	Fixed::operator-(const Fixed& fixedNum) const
{
	return Fixed(this->toFloat() - fixedNum.toFloat());
}

Fixed	Fixed::operator*(const Fixed& fixedNum) const
{
	return Fixed(this->toFloat() * fixedNum.toFloat());
}

Fixed	Fixed::operator/(const Fixed& fixedNum) const
{
	return Fixed(this->toFloat() / fixedNum.toFloat());
}

Fixed	Fixed::operator++(void)
{
	this->num++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	value(*this);

	this->num++;
	return value;
}

Fixed	Fixed::operator--(void)
{
	this->num--;
	return Fixed(*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	value(*this);

	this->num--;
	return value;
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

Fixed&	Fixed::min(Fixed& fixedNum1, Fixed& fixedNum2)
{
	return (fixedNum1 < fixedNum2) ? fixedNum1 : fixedNum2;
}

const Fixed&	Fixed::min(const Fixed& fixedNum1, const Fixed& fixedNum2)
{
	return (fixedNum1 < fixedNum2) ? fixedNum1 : fixedNum2;
}

Fixed&	Fixed::max(Fixed& fixedNum1, Fixed& fixedNum2)
{
	return (fixedNum1 > fixedNum2) ? fixedNum1 : fixedNum2;
}

const Fixed&	Fixed::max(const Fixed& fixedNum1, const Fixed& fixedNum2)
{
	return (fixedNum1 > fixedNum2) ? fixedNum1 : fixedNum2;
}

std::ostream&	operator<<(std::ostream& ostr, const Fixed& fixedNum)
{
	return ostr << fixedNum.toFloat();
}
