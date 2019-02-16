#include <stdlib.h>
#include <string>
#include <iostream>
#include <array>

int main(int numArguments, char * const * const arguments) {

	uint64_t counter = 0;
	uint64_t maxValue = 100000000000;
	while (++counter != maxValue) {
		continue;
	}

	std::cout << "Total: " << counter << std::endl;
	std::cout << "Successful Completion!" << std::endl;
	return EXIT_SUCCESS;
}