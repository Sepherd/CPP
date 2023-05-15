/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:20:48 by arecce            #+#    #+#             */
/*   Updated: 2023/05/12 12:20:01 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:

		std::string _name;
		Weapon &_weapon; //reference

	public:

		void    attack();

		HumanA(std::string name, Weapon &weapon); //reference
		~HumanA();
};

#endif