/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2024/06/18 20:17:29 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Serializer.hpp"

int	main()
{
	Data data;
	data.num = 42;
	data.str = "Hello, World!";

	std::cout << "Data.num: " << data.num << std::endl;
	std::cout << "Data.str: " << data.str << std::endl;

	uintptr_t	serialized = Serializer::serialize(&data);
	Data*	deserialized = Serializer::deserialize(serialized);

	std::cout << "Deserialized.num: " << deserialized->num << std::endl;
	std::cout << "Deserialized.str: " << deserialized->str << std::endl;
	
	if (deserialized == &data)
	{
        std::cout << "Serialization and deserialization successfully executed" << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed" << std::endl;
    }
}