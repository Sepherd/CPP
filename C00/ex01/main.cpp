#include "includes/PhoneBook.hpp"

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