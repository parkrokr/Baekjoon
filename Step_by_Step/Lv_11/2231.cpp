#include <iostream>

using namespace std;

int decomposition(int n)
{
	int sum = n;

	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main()
{
	int n, result,count(0);
	cin >> n;
	
	result = n;

	for (int i = 1; i <= n; ++i)
	{
		if (decomposition(i) == n && i < result)
		{
			result = i;
			count++;
		}
	}

	if (count == 0)
		cout << 0 << endl;
	else
		cout << result << endl;

	return 0;
}