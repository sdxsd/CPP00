#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>

class Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	darkest_secret;
	public:
		Contact(void);
		~Contact(void);
		void	FillContact(void);
		void	DisplayContact(void);
};

void	PrintTableContent(std::string content);
void	PrintTableLine();

#endif // CONTACT_H
