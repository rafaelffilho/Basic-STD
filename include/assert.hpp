#ifndef ASSERT_HPP
#define ASSERT_HPP

#include "string.hpp"
#include <iostream>


namespace bs {
	void assert(bool test, String message){
		if(!test){
			fprintf(stderr, message.c_str());
			exit(EXIT_FAILURE);
		}
	}
}

#endif //ASSERT_HPP