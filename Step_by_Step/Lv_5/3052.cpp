#include<iostream>

using namespace std;

int main()
{
	const int num = 42;
	int n, count = 0;
	int arr_compare[num]{ 0, };
	
	/*for (int i = 0; i < num; ++i)
	{
		arr_compare[i] = 0;
	}*/
	
	/*for (int i = 0; i < 10; ++i)
	{
		cin >> n;
		n = n % num;
		arr_compare[n]++;
	}

	for (int i = 0; i < num; ++i)
	{
		if (arr_compare[i] != 0)count++;
	}*/

	
	for (int i = 0; i < num; ++i)
	{
		cin >> n;
		if (arr_compare[i] != 0)
		{
			arr_compare[i]++;
			count++;
		}

	}
	
	
	cout << count << endl;
	
	return 0;
}