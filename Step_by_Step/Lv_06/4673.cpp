#include <iostream>

using namespace std;

int self_num_d(int n)
{
	int result(n);
	
	while (1)
	{
		if (n == 0)break;
		result += n % 10;
		n /= 10;
	}
	return result;
}

int main()
{
	const int n = 10000;
	int array[n] = { 0, };

	for (int i = 1; i < n; ++i)
	{
		if (self_num_d(i) < n)
		{
			array[self_num_d(i)] = 1;
		}
		
	}
	
	for (int i = 1; i < n; ++i)
	{
		if (!array[i])cout << i << '\n';
	}

	return 0;
}