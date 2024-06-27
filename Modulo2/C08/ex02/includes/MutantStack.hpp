/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/11/23 17:33:51 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  MUTANTSTACK_HPP
#define  MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class  MutantStack : public std::stack<T>
{
	public:

		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack();
		MutantStack(const  MutantStack &original);
		MutantStack &operator=(const  MutantStack &other);
		~MutantStack();

		iterator	begin();
		iterator	end();
};

#include "../src/MutantStack.tpp"

#endif