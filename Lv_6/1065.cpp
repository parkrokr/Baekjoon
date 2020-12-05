#include <iostream>

using namespace std;

bool dis(int n) //등차수열인지 판별하는 함수
{
	if (n < 100) //두자리 정수는 모두 조건 만족
		return true; 
	else
	{
		int d = (n % 10) - ((n % 100) / 10); //10의 자리와 1의 자리의 차이
		n /= 10;
		while (1)
		{
			if (n <10) // 1의 자릿수가 없어지고 한자리 정수면 모든 자리를 비교했기 때문에 
				return true;
			
			int e = (n % 10) - ((n % 100) / 10); //그 다음 10의 자리와 1의 자리의 차이
			
			if (d != e)return false; 

			n /= 10;

		}
		return false;
	}
	
}

int main()
{
	int count(0),n;
	cin >> n;

	
	for (int i = 1; i <= n; i++)
	{
		if (dis(i) == 1)count++;
	}

	cout << count << endl;

	return 0;
}