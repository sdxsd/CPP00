#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>

class Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		Contact(void);
		~Contact(void);
		void	FillContact(void);
		void	DisplayContact(int idx);
		void	DisplayFullContactInfo(void);
		void	PrintTableLine();
		void	PrintIndex(int idx);
		void	PrintTableContent(std::string content);
};

#endif // CONTACT_H
