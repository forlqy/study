#pragma once
class Point {
private:
	float x, y;
public:
	Point(float x,float y){}
	auto getX() { return x; }
	auto getY() { return y; }
	Point (Point &p){}
};