/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:26:08 by arecce            #+#    #+#             */
/*   Updated: 2023/04/13 16:26:09 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	private:

	void	debug();
	void	info();
	void	warning();
	void	error();

	public:

	void	complain(std::string level);

	Harl();
	~Harl();
};

#endif