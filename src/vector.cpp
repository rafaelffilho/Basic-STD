#include "../include/vector.hpp"

template<typename T>
int bs::Vector<T>::append(T element){
	if (curr_size >= max_size)
		assert(this->_increase_size(curr_size*2));
	data[curr_size] = element;
	curr_size++;
}

template<typename T>
int bs::Vector<T>::clear(){
	for (int i = 0; i < curr_size; ++i)
		free(data[i]);
	curr_size = 0;
	max_size = 16;
}

template<typename T>
int bs::Vector<T>::_increase_size(long new_size){

	curr_size = new_size;
	max_size = curr_size * 2;

	return data = (T*)realloc(data, new_size);
}

template<typename T>
bs::Vector<T>::Vector(){
	max_size = 16;
	data = (T*)calloc(max_size, sizeof(bs::Vector<T>));
}