#include "includes/Template.hpp"

/*
I template sono un meccanismo che consente di scrivere codice generico,
ovvero codice che può funzionare con diversi tipi di dati senza dover essere riscritto per ogni tipo specifico.
I template vengono utilizzati per creare classi e funzioni generiche.
*/

int main()
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}