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
	std::srand(time(0)); //inizializza il generatore di numeri casuali con il tempo attuale
	int randomNumber = std::rand() % 3; //genera un numero casuale tra 0 e 2

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
	}
	return nullptr;
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
		std::cout << "Unknow type" << std::endl;
	}
}

void identify(Base& p)
{
	try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "Type: A" << std::endl;
    } catch (const std::bad_cast&) {}

    try {
        B& b = dynamic_cast<B&>(p);
        std::cout << "Type: B" << std::endl;
    } catch (const std::bad_cast&) {}

    try {
        C& c = dynamic_cast<C&>(p);
        std::cout << "Type: C" << std::endl;
    } catch (const std::bad_cast&) {}
}

int main()
{
	Base *randomObject = generate();

	identify(randomObject); //puntatore
	identify(*randomObject); //riferimento

	delete randomObject;

	return 0;
}