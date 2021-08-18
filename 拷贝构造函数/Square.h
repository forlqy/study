#pragma once
#include<iostream>

class Square {
private:
	double side{ 1.0 };
	static int numberOfObjects;
public:
	double getSide() { return side; }
	void setSide(double side) { this->side = side; }
	Square(double side) {
		this->side = side;
		numberOfObjects++;
	}
	Square() : Square(1.0) {}
	double getArea() { return (side * side); }
	Square(const Square& s){
		this->side = s.side;
		numberOfObjects++;
		std::cout << "Square(const Square&) is invoked" << std::endl;
	}
	~Square() {
		numberOfObjects--;
	}



	static int getNumberOfObjects() { return numberOfObjects; }
	int getNumberOfObjectsNonStatic() { return numberOfObjects; }
};