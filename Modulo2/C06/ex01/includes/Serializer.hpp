/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/11/23 17:33:51 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  Serializer_HPP
#define  Serializer_HPP

#include <string>
#include <iostream>
#include <stdint.h>

#include "Data.hpp"

class  Serializer
{
	private:

		Serializer();
		Serializer(std::string const name, int grade);
		Serializer(const  Serializer &original);
		Serializer &operator=(const  Serializer &other);

	public:

		static uintptr_t serialize(Data *ptr);
		static Data	*deserialize(uintptr_t raw);
		~Serializer();
};

#endif