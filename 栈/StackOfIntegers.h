#pragma once
class StackOfIntegers {
private:
	int elements[100];
	int size{ 0 };
public:
	bool empty();
	int peek();
	int push(int value);
	int pop();
	int getSize();
};