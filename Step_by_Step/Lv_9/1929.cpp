#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void Eratos(int max, int min)
{
	if (min == 1)min = 2;

	vector<bool> PrimeNum(max+1);

	//배열 초기화
	for (auto e : PrimeNum)
		e = true;

	//max의 제곱근 까지의 수 까지만 나눠도 충분
	const int max_sqrt = sqrt(max);
	for (int i = 2; i <= max_sqrt; ++i)
	{
		if (PrimeNum[i])
		{
			//i의 배수들을 false 로 바꿔주기
			//i*(i - 1) 까진 검사가 되었기 때문에 i*i 로 개선 가능
			for (int j = i * i; j <= max; j += i)
				PrimeNum[j] = false;
		}
	}

	//출력
	for (int k = min; k <= max; k++)
	{
		if (PrimeNum[k])
			cout << k << "\n" ;
	}
	cout << endl;
}

int main()
{
	int Max, Min;

	cin >> Min >> Max;

	Eratos(Max, Min);

	return 0;
}