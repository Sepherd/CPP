/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/04/23 17:46:15 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:

	int					FixNum;
	static const int	Bits = 8;

	public:

	Fixed();
	~Fixed();
	Fixed(const Fixed &original); // Copy Constructor
	
	Fixed & operator=(const Fixed &assign); // Copy Assignment


	int		getRawBits();
	void	setRawBits(int const raw);
};

#endif