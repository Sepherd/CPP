#include <iostream>
using std::string;
using std::cout;
using std::endl;

int	main()
{
	string	brain = "HI THIS IS BRAIN";
	string	*stringPTR = &brain;
	string	&stringREF = brain;

	cout << "Indirizzo stringa: " << &brain << endl;
	cout << "Indirizzo tenuto dal puntatore alla stringa: " << stringPTR << endl;
	cout << "Indirizzo tenuto dalla reference alla stringa: " << &stringREF << endl;

	cout << "Valore stringa: " << brain << endl;
	cout << "Valore tenuto dal puntatore alla stringa: " << *stringPTR << endl;
	cout << "Valore tenuto dal puntatore alla stringa: " << stringREF << endl;
	
	return (0);
}