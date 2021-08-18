#include "StackOfIntegers.h"

StackOfIntegers::StackOfIntegers() {
	size = 0;
	for (int& i : elements) {
		i = 0;
	}
}
bool StackOfIntegers::empty() {
	return (size == 0 ? true : false);
}
int StackOfIntegers::peek() {
	return elements[size - 1];
}
int StackOfIntegers::push(int value);
int StackOfIntegers::pop() {
	int 
}
int StackOfIntegers::getSize() {
	return size;
}