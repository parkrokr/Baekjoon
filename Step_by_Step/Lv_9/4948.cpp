#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int n = 1;

	while (1)
	{
		cin >> n;
		if (n == 0)break;

		vector<bool> PrimeNum(2 * n + 1);

		//배열 초기화
		for (auto e : PrimeNum)
			e = true;

		//max의 제곱근 까지의 수 까지만 나눠도 충분
		const int max_sqrt = sqrt(2 * n);
		for (int i = 2; i <= max_sqrt; ++i)
		{
			if (PrimeNum[i])
			{
				const int pow_i = i * i;
				for (int j = pow_i; j <= 2 * n; j += i)
					PrimeNum[j] = false;
			}
		}

		int count = 0;
		//출력
		for (int k = n + 1; k <= 2 * n; k++)
		{
			if (PrimeNum[k])count++;

		}
		cout << count << "\n";

	}

	return 0;
}