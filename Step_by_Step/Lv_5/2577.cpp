#include<iostream>

using namespace std;

int main()
{
	const int num = 10;
	int a, b, c, x, n;

	int arr[num]{ 0,0,0,0,0,0,0,0,0,0 };
	
	cin >> a >> b >> c;

	x = a * b * c;

	for (int i = 0; i < 10; ++i)
	{
		if (x == 0)break;
		n = (x % 10);
		arr[n] ++ ;
		x = x / 10;	
	}

	for (int i = 0; i < num; ++i)
	{
		cout << arr[i] << '\n';
	}

	return 0;
}