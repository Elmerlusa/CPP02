/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:45:15 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/21 18:45:15 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_
# define _POINT_

# include "Fixed.hpp"

class	Point
{
	private:
		Fixed const	_x;
		Fixed const _y;
	public:
		Point(void);
		Point(const Point& point);
		Point(Fixed const x, Fixed const y);
		~Point(void);

		Fixed	getX(void) const;
		Fixed	getY(void) const;

		Point&	operator=(const Point& point);
		bool	operator==(const Point& point) const;
};

std::ostream&	operator<<(std::ostream& ostr, const Point& point);

#endif
