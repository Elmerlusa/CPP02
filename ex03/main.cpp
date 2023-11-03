/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:58:27 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/21 18:58:27 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);
void	test(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	{
		Point	a;
		Point	b;
		Point	c(Fixed(10.5f), Fixed(0));

		std::cout << "Triangle: " << a << ", " << b << ", " << c << std::endl;
		test(a, b, c, Point(Fixed(1), Fixed(0)));
	}
	{
		Point	a;
		Point	b(Fixed(0), Fixed(-10.5f));
		Point	c(Fixed(10.5f), Fixed(0));

		std::cout << "Triangle: " << a << ", " << b << ", " << c << std::endl;
		test(a, b, c, Point(Fixed(0), Fixed(0)));
		test(a, b, c, Point(Fixed(9.2f), Fixed(0)));
		test(a, b, c, Point(Fixed(1), Fixed(1)));
		test(a, b, c, Point(Fixed(-1), Fixed(-1.5f)));
		test(a, b, c, Point(Fixed(1.5f), Fixed(3.7f)));
		test(a, b, c, Point(Fixed(4.15f), Fixed(-2.2f)));
		test(a, b, c, Point(Fixed(9.2f), Fixed(-0.2f)));
	}
	return 0;
}

void	test(Point const a, Point const b, Point const c, Point const point)
{
	bool	inside = bsp(a, b, c, point);
		
	std::cout << point << " is" << (inside ? "" : " not") << " within the triangle" << std::endl;
}
