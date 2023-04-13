/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:01 by arecce            #+#    #+#             */
/*   Updated: 2023/04/13 16:14:02 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Zombie
{
    private:

    string Name;

    public:

    void announce();

    Zombie (string name);
    ~Zombie ();
};

Zombie  *newZombie(string name);
void    randomChump(string name);

#endif