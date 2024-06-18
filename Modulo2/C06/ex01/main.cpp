/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2024/06/18 19:19:21 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Serializer.hpp"

int	main(int ac, char **av)
{
	Data data;
	data.d = 42;

	std::cout << "Data address: " << &data << std::endl;

	uintptr_t	serialized = Serializer::serialize(&data);
	Data*	deserialized = Serializer::deserialize(serialized);

	std::cout << "Serialized address: " << &serialized << std::endl;
	std::cout << "Deserialized address: " << deserialized << std::endl;
	
	if (deserialized == &data)
	{
        std::cout << "Serialization and deserialization successful" << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed" << std::endl;
    }
}