#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <cstdlib>
#include "assert.hpp"

namespace bs {
	template<typename T>
	class Vector{
	private:
		T* data;
		long curr_size;
		long max_size;
	public:
		Vector();
		int append(T);
		int erease(long);
		int erease(T);
		int clear();
		int size();
		int max();
		int _increase_size(long);
	};
}

#endif // VECTOR_HPP