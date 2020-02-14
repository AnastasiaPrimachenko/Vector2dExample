#include "Vector2d.h"
#include <iostream>
using namespace std;

//Vector2d::Vector2d()
//{
//	this->x = 0;
//	this->y = 0;
//}

Vector2d::Vector2d(double x, double y) // �������� ������� � ��������� ������������
{
	//���������� � ����� ����� ����� ��������� this, ������� ���� ���������� � ������ �����
	this->x = x;//������ � ���� ����� ��������� this ���������� � ������� ��������� -&gt;
	(*this).y = y; //������������� ����� ��������, � ������ ������������� ���������
}

Vector2d::Vector2d(double x1, double y1, double x2, double y2)
{
	this->x = x2 - x1;
	this->y = y2 - y1;
}

Vector2d::Vector2d(const Vector2d& Vector)
{
	this->x = Vector.x;
	this->y = Vector.y;
}

void Vector2d::sum(Vector2d vector)//����� ����������� ������� b � ������� �������
{
	x = x + vector.x;
	y = y + vector.y;
}

void Vector2d::sub(Vector2d vector)
{
	x = x - vector.x;
	y = y - vector.y;
}

double Vector2d::scalarMult(Vector2d vector)
{
	return x * vector.x + y * vector.y;
}

void Vector2d::mult(double a)
{
	x = x * a;
	y = y * a;
}

void Vector2d::print()
{
	cout << "X:" << x << endl;
	cout << "Y:" << y << endl;
}
Vector2d::~Vector2d()
{
}