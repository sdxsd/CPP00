#include "Contact.hpp"

Contact::Contact(void) {
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

Contact::~Contact(void) {
	;
}

void Contact::FillContact(void) {
	while (first_name.length() == 0) {
		std::cout << "Enter first name: ";
		std::getline(std::cin, first_name);
	}
	while (last_name.length() == 0) {
		std::cout << "Enter last name: ";
		std::getline(std::cin, last_name);
	}
	while (nickname.length() == 0) {
		std::cout << "Enter nickname: ";
		std::getline(std::cin, nickname);
	}
	while (phone_number.length() == 0) {
		std::cout << "Enter phone number: ";
		std::getline(std::cin, phone_number);
	}
	while (darkest_secret.length() == 0) {
		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, darkest_secret);
	}
}

void	PrintTableLine() {
	std::cout << std::endl;
	for (int j = 0; j < 4; j++) {
		std::cout << "+";
		for (int i = 0; i <= 8; i++)
			std::cout << '-';
	}
	std::cout << "+" << std::endl;
}

void	PrintIndex(int idx) {
	std::cout << "|";
	std::cout << idx;
	for (unsigned long i = 0; i < 8; i++)
		std::cout << " ";
}

void	PrintTableContent(std::string content) {
	unsigned long	char_c;

	char_c = 9;
	std::cout << "|";
	if (content.length() > char_c) {
		for (unsigned long i = 0; i < char_c - 1; i++) {
			std::cout << content[i];
		}
		std::cout << ".";
	}
	else {
		char_c -= content.length();
		std::cout << content;
		for (unsigned long i = 0; i < char_c; i++)
			std::cout << " ";
	}
}

void Contact::DisplayFullContactInfo(void) {
	std::cout << "First name: " << first_name << std::endl;
	std::cout << "Last name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest secret: " << darkest_secret << std::endl;
}

void Contact::DisplayContact(int idx) {
	PrintTableLine();
	PrintIndex(idx);
	PrintTableContent(first_name);
	PrintTableContent(last_name);
	PrintTableContent(nickname);
	std::cout << "|";
}
