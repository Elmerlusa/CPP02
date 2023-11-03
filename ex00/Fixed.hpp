/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:03:33 by javmarti          #+#    #+#             */
/*   Updated: 2023/04/11 19:03:33 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_
#define _FIXED_

#include <iostream>

class	Fixed
{
	private:
		int					num;
		static const int	binaryPointPos;
	public:
		Fixed(void);
		Fixed(const Fixed& fixedNum);
		~Fixed(void);

		Fixed&	operator=(const Fixed& fixedNum);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
