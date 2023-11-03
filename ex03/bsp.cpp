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

const Point	getVector(Point const a, Point const b)
{
	return Point(b.getX() - a.getX(), b.getY() - a.getY());
}

const Fixed	getCrossProduct(const Point v1, const Point v2)
{
	return Fixed(v1.getX() * v2.getY() -  v1.getY() * v2.getX());
}

int	isSameOrientation(Point const a, Point const b, Point const p, Fixed triangleOrientation)
{
	Fixed	orientation = getCrossProduct(getVector(a, b), getVector(b, p));
	
	return orientation * triangleOrientation > 0 ? 1 : 0;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	triangleOrientation = getCrossProduct(getVector(a, b), getVector(b, c));
	int	inSections;

	if (triangleOrientation == 0)
	{
		std::cout << "Error: not a triangle" << std::endl;
		return false;
	}
	inSections = isSameOrientation(a, b, point, triangleOrientation)
		+ isSameOrientation(b, c, point, triangleOrientation)
		+ isSameOrientation(c, a, point, triangleOrientation);
	return inSections == 3;
}