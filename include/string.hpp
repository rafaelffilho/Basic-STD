#ifndef STRING_HPP
#define STRING_HPP

#include <cstdlib>
#include <iostream>
#include <cstring>

namespace bs {
	class String {
	private:
		char* data;
		long curr_size;
		long max_size;
	public:
		String();
		char* c_str();
		void split(String);
		char* operator=(char*);
		void _increase_size(long);
		friend std::ostream& operator<<(std::ostream&, String string);
	};
}

#endif //STRING_HPP