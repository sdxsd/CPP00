#include "Contact.hpp"

Contact::Contact(void) {
	first_name = "";
	last_name = "";
	nickname = "";
	darkest_secret = "";
}

Contact::~Contact(void) {
	;
}

void Contact::FillContact(void) {
	std::cout << "Enter first name: ";
	std::cin >> first_name;
	std::cout << "Enter last name: ";
	std::cin >> last_name;
	std::cout << "Enter nickname: ";
	std::cin >> nickname;
	std::cout << "Enter darkest secret: ";
	std::cin >> darkest_secret;
}

void	PrintTableLine() {
	std::cout << std::endl;
	for (int j = 0; j < 3; j++) {
		std::cout << "+";
		for (int i = 0; i <= 8; i++)
			std::cout << '-';
	}
	std::cout << "+" << std::endl;
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

void Contact::DisplayContact(void) {
	PrintTableLine();
	PrintTableContent(first_name);
	PrintTableContent(last_name);
	PrintTableContent(nickname);
	std::cout << "|";
}
