/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:10:08 by javmarti          #+#    #+#             */
/*   Updated: 2023/05/04 21:10:08 by javmarti         ###   ########.fr       */
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

		Fixed&				operator=(const Fixed& fixedNum);
		bool				operator>(const Fixed& fixedNum) const;
		bool				operator<(const Fixed& fixedNum) const;
		bool				operator>=(const Fixed& fixedNum) const;
		bool				operator<=(const Fixed& fixedNum) const;
		bool				operator==(const Fixed& fixedNum) const;
		bool				operator!=(const Fixed& fixedNum) const;
		Fixed				operator+(const Fixed& fixedNum) const;
		Fixed				operator-(const Fixed& fixedNum) const;
		Fixed				operator*(const Fixed& fixedNum) const;
		Fixed				operator/(const Fixed& fixedNum) const;
		Fixed				operator++(void);
		Fixed				operator++(int);
		Fixed				operator--(void);
		Fixed				operator--(int);
		
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

		static Fixed&		min(Fixed& fixedNum1, Fixed& fixedNum2);
		static const Fixed&	min(const Fixed& fixedNum1, const Fixed& fixedNum2);
		static Fixed&		max(Fixed& fixedNum1, Fixed& fixedNum2);
		static const Fixed&	max(const Fixed& fixedNum1, const Fixed& fixedNum2);
};

std::ostream&	operator<<(std::ostream& ostr, const Fixed& fixedNum);

#endif
