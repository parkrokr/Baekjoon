#include <iostream>

int main()
{
	using namespace std;

	int x, y;
	int a, b, c, d;

	cin >> x;
	cin >> y;
	
	a = y % 10;
	b = (y % 100)/10;
	c = y / 100;

	cout << x*a << endl;
	cout << x*b << endl;
	cout << x*c << endl;
	cout << x * y << endl;
	
	return 0;
}