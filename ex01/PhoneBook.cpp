#include "PhoneBook.hpp"
#include <stdlib.h>

PhoneBook::PhoneBook(void) {
	Exit = false;
	NumContacts = 0;
}

PhoneBook::~PhoneBook(void) {
	;
}

void PhoneBook::PrintPhoneBook(void) {
	PrintTableLine();
	PrintTableContent("F NAME");
	PrintTableContent("L NAME");
	PrintTableContent("NICK N");
	std::cout << "|";
	for (short i = 0; i < NumContacts; i++)
		ContactList[i].DisplayContact();
	PrintTableLine();
}

void PhoneBook::AddContactToPhoneBook() {
	if (NumContacts >= 7)
		NumContacts = 0;
	ContactList[NumContacts++].FillContact();
}

void PhoneBook::ReceiveCommand() {
	std::string	cmd;
	bool		cont;

	cont = true;
	while (cont != false) {
		std::cout << "Enter command (ADD, SEARCH, EXIT, DISPLAY): ";
		std::getline(std::cin, cmd);
		cont = false;
		if (cmd == "ADD")
			AddContactToPhoneBook();
		else if (cmd == "SEARCH")
			SearchPhoneBook();
		else if (cmd == "EXIT")
			Exit = true;
		else if (cmd == "DISPLAY")
			PrintPhoneBook();
		else
			cont = true;
	}
}

void PhoneBook::SearchPhoneBook(void) {
	std::string	IndexString;

	std::cout << "Enter index of contact: ";
	std::cin >> IndexString;
	int index = atoi(IndexString.c_str()) - 1;
	if (!(index < 0 || index > 7 || index > NumContacts))
		ContactList[index].DisplayContact();
	else
		std::cout << "Contact not found." << std::endl;
}

bool PhoneBook::ShouldExit()
{
	return (Exit);
}
