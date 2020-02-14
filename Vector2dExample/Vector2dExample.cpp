#include <iostream>
#include "Vector2d.h"
using namespace std;

int main()
{
	Vector2d Vector(3, 3, 7, 7);
	Vector.print();

	Vector.mult(2.5);
	Vector.print();

	Vector2d Vector2(0.5, 0.5);
	cout << Vector.scalarMult(Vector2) << endl;

	Vector2d Vector3(Vector);
	Vector3.print();

	Vector.setx(5.5);
	Vector.sety(5.5);
	Vector.sum(Vector3);
	Vector.print();
	cout << Vector.getx() << endl;
	cout << Vector.gety() << endl;
}
