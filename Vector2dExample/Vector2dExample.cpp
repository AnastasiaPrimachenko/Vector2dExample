#include <iostream>
#include <string>
#include <cmath>
#include "Vector2d.h"
using namespace std;

int main()
{
	Vector2d v1(1, 3);
	Vector2d v2(5,4, 7, 5);
	cout << "Vector1: " << (string)v1 << endl;
	cout << "Vector2: " << (string)v2 << endl;
	cout << "Vector1 + Vector2: " << (string)(v1 + v2) << endl;
	cout << "Vector1 - Vector2: " << (string)(v1 - v2) << endl;
	cout << "Vector1 * 5: " << (string)(v1 * 5) << endl;
	cout << "Vector1 Length: " << v1.length() << endl;
	cout << "Scalar multiplication: " << v1 * v2 << endl;
	cout << "Angle between Vector1 and Vector2: " << v1.angle(v2) << endl;
}
