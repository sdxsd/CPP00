#include "PhoneBook.hpp"

int main(void) {
	PhoneBook pb;

	while(!pb.ShouldExit())
		pb.ReceiveCommand();
}
