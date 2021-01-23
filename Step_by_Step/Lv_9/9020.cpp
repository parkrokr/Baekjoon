#include <iostream>
#include <vector>

using namespace std;

void primenum(vector<bool>& PrimeNum,int n)
{
	if (n == 0)return;

	
	//배열 초기화
	for (auto e : PrimeNum)
		e = true;

	PrimeNum[1] = false;

	for (int i = 2; i * i <= n; ++i)
	{
		if (PrimeNum[i])
		{
			for (int j = i * i; j <= n; j += i)
				PrimeNum[j] = false;
		}
	}
	
}

int main()
{
	int T;
	cin >> T;

	vector<bool> PrimeNum(10001);

	primenum(PrimeNum, 10000);

	for (int i = 0; i < T; ++i)
	{
		int n;

		cin >> n;


		for (int a = n / 2 ; a > 1; --a)
		{
			if (PrimeNum[a] && PrimeNum[n - a])
			{
				cout << a << " " << n - a << endl;
				break;
			}
		}
	}
	

	return 0;
}