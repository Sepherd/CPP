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
	cin >> cmd;
	cout << "\n";
	return (cmd);
}

void	save_contact_info(PhoneBook *pb)
{
		string str;
		cout << "First name: ";
		cin.ignore();
		getline(cin, str);
		pb->contact[pb->i].setFirstName(str);
		cout << "Last name: ";
		getline(cin, str);
		pb->contact[pb->i].setLastName(str);
		cout << "Nickname: ";
		getline(cin, str);
		pb->contact[pb->i].setNickname(str);
		cout << "Phone number: ";
		getline(cin, str);
		pb->contact[pb->i].setPhoneNumber(str);
		cout << "Dark secret: ";
		getline(cin, str);
		pb->contact[pb->i].setSecret(str);
		cout << "\n";
}

void	print_search(PhoneBook *pb)
{
	int	index = 0;
	if (pb->nb > 0)
	{
		while(1)
		{
			cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
			for (int j = 0; j <= pb->nb; j++)
			{
				cout << "|         ";
				cout << j + 1;
				cout << "|";
				pb->contact[j].list_contacts();
			}
			cout << "Type the index of the desired contact: ";
			cin >> index;
			if (index < 1 || (index > pb->nb))
				cout << "Index out of range.\n\n";
			else
			{
				pb->contact[index - 1].print_contact();
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
	pb.nb = 0, pb.i = 0;
	
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
			if (pb.nb > 7) pb.nb = 7;
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