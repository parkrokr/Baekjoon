#include <iostream>

using namespace std;

int main()
{
	int A, B, V;

	cin >> A >> B >> V;

	int day(0);
	int height(0);

	if ((V - A) % (A - B) != 0)
	{
		day = (V - A) / (A - B) + 2;
	}
	else
		day = (V - A) / (A - B) + 1;

	cout << day << endl;


	return 0;
}