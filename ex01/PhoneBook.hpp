#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact ContactList[8];
		short	NumContacts;
		bool	Exit;
	public:
		// Class constructor and destructor.
		PhoneBook(void);
		~PhoneBook(void);
		// Class methods.
		void	PrintPhoneBook(void);
		void	ReceiveCommand(void);
		bool	ShouldExit(void);
		void	AddContactToPhoneBook(void);
		void	SearchPhoneBook(void);
};

#endif // PHONEBOOK_H
