#pragma once
#include "Shape.h"

class Circle : public Shape {//���������ʵ�ַ���ֻ�漰�����������漰��������ݳ�Ա
public:
	Circle();
	Circle(double radius_);
	Circle(double radius_, Color color_, bool filled_);
	double getArea() override;//������������ﲻȥ�ض��崿�麯������ȥʵ�֣���˴��麯���Ա��ִ���״̬����ʱCircle��Ϊ������
	double getRadius() const;
	void setRadius(double radius);

	string toString();
private:
	double radius;
};