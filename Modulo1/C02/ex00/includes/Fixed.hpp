/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/05/16 17:10:01 by arecce           ###   ########.fr       */
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
		
		Fixed &operator=(const Fixed &assign); // Copy Assignment
	
	
		int		getRawBits() const;
		void	setRawBits(int const raw);
};

#endif