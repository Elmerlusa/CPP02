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

int	main(void)
{
	Point a(Fixed(5.5f), Fixed(3));
	Point b;
	
	b = a;
	std::cout << "POINT A -> X: " << a.getX()
		<< " Y: " << a.getY() << std::endl;
	std::cout << "POINT B -> X: " << b.getX()
		<< " Y: " << b.getY() << std::endl;
	return 0;
}
