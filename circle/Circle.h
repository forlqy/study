#pragma once
class Circle {//���������ʵ�ַ���ֻ�漰�����������漰��������ݳ�Ա
public:
	Circle();
	Circle(double radius_);
	double getArea();
	double getRadius() const;
	void setRadius(double radius);
private:
	double radius;
};