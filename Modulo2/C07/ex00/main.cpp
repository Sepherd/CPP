#include "includes/whatever.hpp"

/*
I template sono un meccanismo che consente di scrivere codice generico,
ovvero codice che può funzionare con diversi tipi di dati senza dover essere riscritto per ogni tipo specifico.
I template vengono utilizzati per creare classi e funzioni generiche.
*/

int main()
{
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap<int>(a, b);
	std::cout << "Swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min<int>(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max<int>(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "Swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	double e = 4.32;
	double f = 4.31;

	std::cout << "e = " << e << ", f = " << f << std::endl;
	::swap<double>(e, f);
	std::cout << "Swap: e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min<double>(e, f) << std::endl;
	std::cout << "max( e, f ) = " << ::max<double>(e, f) << std::endl;

	return 0;
}