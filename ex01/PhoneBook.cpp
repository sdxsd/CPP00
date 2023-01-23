#include "PhoneBook.hpp"
#include <cctype>
#include <stdlib.h>

PhoneBook::PhoneBook(void) {
	Exit = false;
	NumContacts = 0;
	IndexContacts = 0;
}

PhoneBook::~PhoneBook(void) {
	;
}

void PhoneBook::PrintPhoneBook(void) {
	PrintTableLine();
	PrintTableContent("INDEX");
	PrintTableContent("F NAME");
	PrintTableContent("L NAME");
	PrintTableContent("NICK N");
	std::cout << "|";
	for (short i = 0; i < NumContacts; i++)
		ContactList[i].DisplayContact(i + 1);
	PrintTableLine();
}

void PhoneBook::AddContactToPhoneBook() {
	if (IndexContacts >= 8)
		IndexContacts = 0;
	ContactList[IndexContacts++].FillContact();
	if (NumContacts < 8)
		NumContacts++;
	std::cout << "Contact added successfully." << std::endl;
}

void PhoneBook::ReceiveCommand() {
	std::string	cmd;

	std::cout << "Enter command: ";
	std::cin >> cmd;
	if (std::cin.eof())
		Exit = true;
	for (unsigned long i = 0; i < cmd.length(); i++)
		if (std::isalpha(cmd[i]) && std::isupper(cmd[i]))
			cmd[i] += 32;
	if (cmd == "add")
		AddContactToPhoneBook();
	else if (cmd == "search") {
		PrintPhoneBook();
		SearchPhoneBook();
	}
	else if (cmd == "exit")
		Exit = true;
}

void PhoneBook::SearchPhoneBook(void) {
	std::string	IndexString;

	std::cout << "Enter index of contact: ";
	std::cin >> IndexString;
	int index = atoi(IndexString.c_str());
	if ((index > 0 && index <= 7) && index <= NumContacts) {
		ContactList[index - 1].DisplayFullContactInfo();
	}
	else
		std::cout << "Contact not found." << std::endl;
}

bool PhoneBook::ShouldExit()
{
	return (Exit);
}
