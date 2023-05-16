/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:01 by arecce            #+#    #+#             */
/*   Updated: 2023/05/16 16:37:15 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
;



class Zombie
{
    private:

        std::string Name;

    public:

        void announce();

        Zombie (std::string name);
        ~Zombie ();
};

#endif