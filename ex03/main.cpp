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
	Point	a;
	Point	b(Fixed(0), Fixed(10.5f));
	Point	c(Fixed(10.5f), Fixed(0));
	Point	d(Fixed(0.5f), Fixed(8));
	bool	inside = bsp(a, b, c, d);

	std::cout << d << (inside ? "" : " no")
		<< " está contenido en el triángulo" << std::endl;
	return 0;
}
