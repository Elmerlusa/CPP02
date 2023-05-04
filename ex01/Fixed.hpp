/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:57:15 by javmarti          #+#    #+#             */
/*   Updated: 2023/04/27 18:57:15 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_
#define _FIXED_

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					num;
		static const int	binaryPointPos;
	public:
		Fixed(void);
		Fixed(const Fixed& fixedNum);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed(void);

		Fixed&	operator=(const Fixed& fixedNum);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};


std::ostream&	operator<<(std::ostream& ostr, const Fixed& fixedNum);

#endif
