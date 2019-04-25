#include "../include/string.hpp"

bs::String::String(){
	data = (char*)calloc(16, sizeof(char));
}

std::ostream& bs::operator<<(std::ostream& stream, bs::String string){
	stream << string.c_str();
	return stream;
}

char* bs::String::operator=(char* element) {
	if(strlen(element) > max_size){
		this->_increase_size(strlen(element) + 3);
	}
	curr_size = strlen(data);
	strcpy(data, element);

	return data;
}

char* bs::String::c_str(){
	return data;
}

void bs::String::_increase_size(long new_size){
	data = (char*)realloc(data, new_size);
}
