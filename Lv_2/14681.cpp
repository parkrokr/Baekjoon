#include <iostream>

int main()
{
	using namespace std;

	int x, y;

	cin >> x >> y;

	if (x > 0)
	{
		if (y > 0)
			cout << "1" << endl;
		else if (y < 0)
			cout << "4" << endl;
	}
	else if (x < 0)
	{
		if (y > 0)
			cout << "2" << endl;
		else if (y < 0)
			cout << "3" << endl;
	}

	return 0;
}