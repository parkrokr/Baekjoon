#include<iostream>

using namespace std;

int main()
{
	int n;
	int sum(0);
	char array[100]{ 0 };
	
	cin >> n;
	cin>>array;

	for (int i = 0; i < n; ++i)
	{
		sum += (int)array[i] - (int)'0';
	}

	cout << sum << endl;;
	
	return 0;
}