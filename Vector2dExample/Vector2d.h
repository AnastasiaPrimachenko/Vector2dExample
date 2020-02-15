#pragma once
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
class Vector2d
{
	private: 
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
		Vector2d operator+(const Vector2d& vector);    
		Vector2d operator-(const Vector2d& vector);    
		double operator*(const Vector2d& vector);	  
		Vector2d operator*(const double number);      
		friend Vector2d operator*(double, Vector2d&);  
		Vector2d& operator++();						   
		Vector2d operator++(int);					   
		Vector2d& operator--();						  
		Vector2d operator--(int);					   
		const Vector2d& operator += (const Vector2d&); 
		const Vector2d& operator -= (const Vector2d&); 
		double operator *= (const Vector2d&);
		const Vector2d& operator *= (const double);
		operator string();
};



