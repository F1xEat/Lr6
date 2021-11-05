#include <iostream> 
#include <iomanip> 
#include "windows.h"
#include <cmath>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
	cout << "Enter c = ";
	cin >> c;
	float x = a, y;
	while (x <= b)
	{
		y = pow(x,8) + 5 * x*x - 5;
		cout << "x=" << x << setw(5) << "y=" << y << endl;
		x += c;
		return 0;
	}
}
cout << "Github";
// Git hub 