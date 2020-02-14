#pragma once
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
class Vector2d
{
	private: // закрытые данные, используются только внутри класса
		double x, y;
	public:
		Vector2d() { x = 0; y = 0; }
		Vector2d(double, double);
		Vector2d(double, double, double, double);
		Vector2d(const Vector2d&);
		~Vector2d();

		void setx(double value) { x = value; }
		double getx() { return x; }
		void sety(double value) { y = value; }
		double gety() { return y; }
		void sum(Vector2d);
		void sub(Vector2d);
		void mult(double);
		double scalarMult(Vector2d);
		void print(void);
		double angle(Vector2d);
		double length();
		Vector2d operator+(const Vector2d& vector);    //сложение векторов
		Vector2d operator-(const Vector2d& vector);    //вычитание
		double operator*(const Vector2d& vector);	   //скалярное умножение
		Vector2d operator*(const double number);       //умножение вектора
		friend Vector2d operator*(double, Vector2d&);  //на число
		Vector2d& operator++();						   //инкремент, префиксный оператор
		Vector2d operator++(int);					   //постфиксный
		Vector2d& operator--();						   //декремент, префиксный оператор
		Vector2d operator--(int);					   //постфиксный
		const Vector2d& operator += (const Vector2d&); //операторы
		const Vector2d& operator -= (const Vector2d&); //присвоения
		double operator *= (const Vector2d&);
		const Vector2d& operator *= (const double);
		operator string();
		//friend const Vector2d& operator*=(double, Vector2d&);
};



