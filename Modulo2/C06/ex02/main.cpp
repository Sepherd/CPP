/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepherd <sepherd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2023/11/24 17:05:12 by sepherd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base 
{
	public:
		virtual ~Base() = default;
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base* generate()
{
	int randomNumber = std::rand() % 3;

	switch (randomNumber) {
		case 0:
			std::cout << "A generated" << std::endl;
			return new A();
		case 1:
			std::cout << "B generated" << std::endl;
			return new B();
		case 2:
			std::cout << "C generated" << std::endl;
			return new C();
		default:
			return nullptr;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr) {
		std::cout << "Type: A" << std::endl;
	} else if (dynamic_cast<B*>(p) != nullptr) {
		std::cout << "Type: B" << std::endl;
	} else if (dynamic_cast<C*>(p) != nullptr) {
		std::cout << "Type: C" << std::endl;
	} else {
		std::cout << "Type unknow" << std::endl;
	}
}

void identify(Base& p)
{
	if (typeid(p) == typeid(A)) {
		std::cout << "Type: A" << std::endl;
	} else if (typeid(p) == typeid(B)) {
		std::cout << "Type: B" << std::endl;
	} else if (typeid(p) == typeid(C)) {
		std::cout << "Type: C" << std::endl;
	} else {
		std::cout << "Type unknow" << std::endl;
	}
}

int main()
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	Base *randomObject = generate();
	identify(randomObject);
	identify(*randomObject);

	delete randomObject;

	return 0;
}