#pragma once
class Circle {//���������ʵ�ַ���ֻ�漰�����������漰��������ݳ�Ա
public:
	Circle();
	Circle(double radius_);
	double getArea() const;
	double getRadius() const;
	Circle& setRadius(double radius);//
private:
	double radius;
};