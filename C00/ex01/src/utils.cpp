#include "../includes/PhoneBook.hpp"

string	get_cmd(string cmd)
{
	cout << "Commands available:\n\n";
	cout << "- ADD - to save a new contact,\n";
	cout << "- SEARCH - to display a specific contact,\n";
	cout << "- EXIT - quit the program.\n\n";
	cout << "Enter command: ";
	getline(cin, cmd);
	cout << "\n";
	return (cmd);
}

string	get_input(string str, string field)
{
	while (1)
	{
		cout << field;
		getline(cin, str);
		if (!str.empty())
			return (str);
		else
			cout << "\033[1;31mThe field cannot be empty.\033[1;0m\n";
	}
}

string	ten_chars(string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
	{
		int	k = 10 - str.length();
		for (int i = 0; i < k; i++)
			cout << " ";
		return (str);
	}
}