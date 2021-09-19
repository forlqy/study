#pragma once
#include <string>
#include <iostream>
#include <cmath>
#include <exception>
#include <istream>
#include <ostream>
class Vec2D{
public:
	Vec2D();
	Vec2D(double, double);
	~Vec2D();
private:
	double x_;
	double y_;
public:
	// ������ת��Ϊ�ַ�����ʽ��ʾ
	std::string toString();
	// �����ӷ�
	Vec2D add(const Vec2D& secondVec2D);
	//��������ֵ�ļӷ�
	Vec2D add(double numeral);
	Vec2D operator+ (const Vec2D& secondVec2D);//  TODO03
	Vec2D operator+ (const double numeral);
	Vec2D& operator+= (const Vec2D& secondVec2D);// TODO04ֻ�������˶���������+=���㣬����v1+=3.0+=v2;������ʽ��֧�֣�3.0Ϊ����ֵprvalue)������ʹ����Ԫ����

	// ��������
	Vec2D subtract(const Vec2D& secondVec2D);
	//��������ֵ����
	Vec2D subtract(const double numeral);
	Vec2D operator- (const Vec2D& secondVec2D);
	Vec2D operator- (const double numeral);
	Vec2D& operator-= (const Vec2D& secondVec2D);
	// �������
	double dot(const Vec2D& secondVec2D);
	double operator* (const Vec2D& secondVec2D);
	// ��������
	Vec2D multiply(double multiplier);
	Vec2D operator* (double multiplier);
	friend Vec2D operator* (double multipier , Vec2D vec2d);
	// ������ֵ
	Vec2D negative();
	Vec2D operator- ();
	// ��������1
	Vec2D& increase();
	Vec2D& operator++ ();//ǰ��++ lvalue
	Vec2D operator++ (int dummy);//����++Ϊprvalue�����ܷ�����������
	// �����Լ�1
	Vec2D& decrease();
	Vec2D& operator-- ();
	Vec2D operator-- (int dummy);
	// ��ȡ�����޸�����Ԫ��
	double& at(const int index);
	double& operator[] (const int& index);
	// �������ķ��������ȣ�
	double magnitude();
	operator double();
	// ��������x+��ļн�
	double direction();
	// �Ƚ����������ĳ��ȡ����firstVec2DС��secondVec2D������-1�����ڷ���1����ȷ���0
	int compareTo(Vec2D secondVec2D);
	friend std::ostream& operator<< (std::ostream& os, const Vec2D& v);
	friend std::istream& operator>> (std::istream& is, Vec2D& v);
};

