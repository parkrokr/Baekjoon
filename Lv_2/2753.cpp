#include <iostream>

int main()
{
	using namespace std;

	int a;
	bool b;
	cin >> a;

	b = ((a % 4 == 0) && ((a % 100 != 0) || (a % 400 == 0)));
	
	cout << b << endl;

	return 0;
}