/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 20:13:44 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/21 20:13:44 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	calcArea(Point const a, Point const b, Point const c)
{
	
	Fixed	area(Fixed(0.5f) * (a.getX() * (b.getY() - c.getY())
		+ b.getX() * (c.getY() - a.getY())
		+ c.getX() * (a.getY() - b.getY())));
	
	return area >= 0 ? area : area * Fixed(-1);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	innerArea1;
	Fixed	innerArea2;
	Fixed	innerArea3;
	Fixed	zero;

	if (a == b || a == c || b == c)
	{
		std::cout << "Error: no es un triángulo" << std::endl;
		return false;
	}
	if (point == a || point == b || point == c)
		return false;
	innerArea1 = calcArea(a, b, point);
	innerArea2 = calcArea(b, c, point);
	innerArea3 = calcArea(a, c, point);
	if (innerArea1 == zero || innerArea2 == zero || innerArea3 == zero)
		return false;
	return calcArea(a, b, c) == (innerArea1 + innerArea2 + innerArea3);
}