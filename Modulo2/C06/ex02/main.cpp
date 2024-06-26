/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arecce <arecce@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:14:53 by arecce            #+#    #+#             */
/*   Updated: 2024/06/26 18:01:29 by arecce           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>

class Base 
{
	public:
		virtual ~Base() {};
};

class A : public Base {
		virtual ~A() {};
};
class B : public Base {
		virtual ~B() {};
};
class C : public Base {
		virtual ~C() {};
};

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
	return 0;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p)) {
		std::cout << "Type: A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "Type: B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "Type: C" << std::endl;
	} else {
		std::cout << "Unknow type" << std::endl;
	}
}

void identify(Base& p)
{
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Type: A" << std::endl;
	} catch (std::exception &e) {
		try {
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "Type: B" << std::endl;
		} catch (std::exception &e) {
			try {
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "Type: C" << std::endl;
			} catch (std::exception &e) {
				std::cout << "Unknow type" << std::endl;
			}
		}
	
	}
}

int main()
{
	Base *randomObject = generate();

	identify(randomObject); //puntatore
	identify(*randomObject); //riferimento

	delete randomObject;

	return 0;
}