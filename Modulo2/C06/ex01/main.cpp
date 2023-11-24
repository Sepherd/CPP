/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/11/24 16:29:41 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Serializer.hpp"

int	main(int ac, char **av)
{
	Data data;
	data.d = 42;

	uintptr_t	serialized = Serializer::serialize(&data);
	Data*	deserialized = Serializer::deserialize(serialized);

	if (deserialized == &data)
	{
        std::cout << "Serialization and deserialization successful" << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed" << std::endl;
    }
}