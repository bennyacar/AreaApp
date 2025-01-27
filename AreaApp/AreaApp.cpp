#include <iostream>
using namespace std;

//void CalcArea(double, double);

//int main()
//{
//	double Width;
//	double Height;
//	cout << "Enter the width as an integer ==> ";
//	cin >> Width;
//	cout << "Enter the height as an integer ==> ";
//	cin >> Height;

//	CalcArea(Width, Height);
//}

//void CalcArea(double h, double w)
//{
//	cout << "The area is ==> " << (w * h) << endl;
//}

void CircArea(double);

int main()
{
	double Radius;
	cout << "Enter the radius of the circle as an integer ==> ";
	cin >> Radius;
	CircArea(Radius);
}

void CircArea(double r)
{
	cout << "The area of the circle is ==> " << (3.14 * r * r) << endl;
}