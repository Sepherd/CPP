#include "includes/PhoneBook.hpp"
using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::string;

string	get_cmd(string cmd)
{
	cout << "Type a command:\n\n";
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
			cout << "The field cannot be empty.\n";
	}
}

void	save_contact_info(PhoneBook *pb)
{
	string str;
	str = get_input(str, "First name: ");
	pb->contact[pb->i].setFirstName(str);
	str = get_input(str, "Last name: ");
	pb->contact[pb->i].setLastName(str);
	str = get_input(str, "Nickname: ");
	pb->contact[pb->i].setNickname(str);
	str = get_input(str, "Phone number: ");
	pb->contact[pb->i].setPhoneNumber(str);
	str = get_input(str, "Dark secret: ");
	pb->contact[pb->i].setSecret(str);
	cout << "\nContact saved!\n\n";
}

void	print_contact(PhoneBook *pb, int i)
{
	cout << "First name: " << pb->contact[i].getFirstName() + "\n";
	cout << "Last name: " << pb->contact[i].getLastName() + "\n";
	cout << "Nickname: "<< pb->contact[i].getNickname() + "\n";
	cout << "Phone number: " << pb->contact[i].getPhoneNumber() + "\n";
	cout << "Dark secret: " << pb->contact[i].getSecret() + "\n\n";
}

void	print_search(PhoneBook *pb)
{
	int	index = 0;
	if (pb->nb > 1)
	{
		while(1)
		{
			cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
			for (int j = 1; j < pb->nb; j++)
			{
				cout << "|         ";
				cout << j;
				cout << "|";
				pb->contact[j - 1].list_contacts();
			}
			cout << "Type the index of the desired contact: ";
			cin >> index;
			while (cin.fail())
			{
				cout << "Invalid digit. Type numbers only: ";
				cin.clear();
				cin.ignore();
				cin >> index;
			}
			cin.ignore();
			if (index < 1 || (index > pb->nb - 1))
				cout << "Index out of range.\n\n";
			else
			{
				print_contact(pb, index - 1);
				break ;
			}
		}
	}
	else
		cout << "No entries!\n\n";
}

int	main(int ac, char **av)
{
	PhoneBook pb;
	pb.nb = 1, pb.i = 0;
	
	cout << "| RUBRIKA |\n\n";
	while (1)
	{
		string cmd;
		cmd = get_cmd(cmd);
		if (cmd == "ADD")
		{
			cout << "- New contact -\n\n";
			save_contact_info(&pb);
			pb.nb++;
			pb.i++;
			if (pb.nb > 8) pb.nb = 9;
			if (pb.i > 7) pb.i = 0;
		}
		else if (cmd == "SEARCH")
			print_search(&pb);
		else if (cmd == "EXIT")
			break ;
		else
			cout << "Invalid command.\n";
	}
	cout << "Bye bye." << endl;
	return (0);
}