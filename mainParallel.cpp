#include <stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include <thread>
#include <future>

/** Define a simple function for each thread to run. */
uint64_t increment(uint64_t maxValue) {
	uint64_t counter = 0;
	while (++counter != maxValue) {
		continue;
	}
	return counter;
}

/** Define the main entry point to the program. */
int main(int numArguments, char * const * const arguments) {
	
	// Alias some of the types we will be using.
	typedef std::future<uint64_t> UIntFutureType;
	typedef std::vector<UIntFutureType> FutureVectorType;
	
	uint64_t counter = 0;
	uint64_t maxValue = 100000000000;
	
	// Define the list of futures to capture the calculated values from each thread.
	FutureVectorType futureVector;
	// Define the number of threads to run.
	uint16_t numThreads = 4;
	
	// Define our new threads, and corresponding futures.
	for (size_t i = 0; i < numThreads; i++) {
		// auto counterValFuture = ;
		futureVector.push_back(std::async(increment, maxValue/numThreads));
	}
	
	// Get the calculated values from each thread.
	for (auto & futureVal : futureVector) {
		counter += futureVal.get();
	}
		
	std::cout << "Total: " << counter << std::endl;
	std::cout << "Successful Completion!" << std::endl;
	return EXIT_SUCCESS;
}



