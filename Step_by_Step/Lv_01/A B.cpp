#include <iostream>

int main()
{
	using namespace std;

	double x, y, z;
	
	cin >> x>> y;
	
	z = (x / y);

	cout.precision(10);
	
	cout << z;

	return 0;
}