#include <iostream>

int main(int argc, char **argv) {
	for(int arg_i = 1; arg_i < argc; arg_i++) {
		for (int char_i = 0; argv[arg_i][char_i] != '\0'; char_i++)
			std::cout << (char)toupper(argv[arg_i][char_i]);
		std::cout << " ";
	}
	if (argc > 1) std::cout << std::endl;
}
