#include <iostream>
using std::string;

class Book {
	
public:
	
	string	Title;
	string	Author;
	float	*Rates;
	int		RatesCounter;

	Book(string title, string author) {
		Title = title;
		Author = author;
		Rates = new float[RatesCounter];
		Rates[0] = 5;
		Rates[1] = 4;
	}
	~Book(){
		delete[] Rates;
		Rates = nullptr;
	}
	Book(const Book &original) {
		Title = original.Title;
		Author = original.Author;
		RatesCounter = original.RatesCounter;
		Rates = new float[RatesCounter];
		for (int i = 0; i RatesCounter; i++) {
			Rates[i] = original.Rates[i];
		}
	}
}

int main()
{
	Book book1("Millionaire Fastlane", "M.J. DeMarco");
	Book book2("C++ Lambda Story", "Bartek F.");

	Book book3(book1); //si può scrivere anche Book book3 = book1;

	std::cin.get();
}