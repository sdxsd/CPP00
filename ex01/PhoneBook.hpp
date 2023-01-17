#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact ContactList[8];
		short	IndexContacts;
		short	NumContacts;
		bool	Exit;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	PrintPhoneBook(void);
		void	ReceiveCommand(void);
		bool	ShouldExit(void);
		void	AddContactToPhoneBook(void);
		void	SearchPhoneBook(void);
};

#endif // PHONEBOOK_H
