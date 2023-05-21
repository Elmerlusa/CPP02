/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:45:10 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/21 18:45:10 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0)
{
}

Point::Point(const Point& point): _x(point.getX()), _y(point.getY())
{
}

Point::Point(Fixed const x, Fixed const y): _x(x), _y(y)
{
}

Point::~Point(void)
{
}

Fixed	Point::getX(void) const
{
	return this->_x;
}

Fixed	Point::getY(void) const
{
	return this->_y;
}

Point&	Point::operator=(const Point& point)
{
	this->~Point();
	new (this) Point(point);
	return *this;
}
