#include <iostream>
#include "../include/string.hpp"


int main (int argc, char** const argv){

	bs::String test;

	test = "Hello\n";

	std::cout << test.c_str();

	return 0;
}