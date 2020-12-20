#include<iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for (; n > 0; n--)
	{
		for (int i = n; i > 0; i--)cout << "*";
		cout << endl;
	}

	return 0;
}