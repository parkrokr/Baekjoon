#include <iostream>

using namespace std;

void Factorization(int n)
{
	int i = 2;

	if (n != 1)
	{
		while (n - i != 0)
		{
			if (n % i == 0)
			{
				cout << i << endl;
				n /= i;
			}
			else
				i++;
		}
		cout << i << endl;
	}
}

int main()
{
	int N;
	cin >> N;

	Factorization(N);

	return 0;
}