#include <iostream>

using namespace std;

int main()
{
	const int length = 20000;
	
	int n;
	cin >> n;

	int sum = 1;
	int j = 1;
	if (n == 1)cout << 1 << endl;
	else {
		for (int i = 1; i < length; i++)
		{
			sum += 6 * j;
			if (n <= sum)
			{
				cout << j + 1 << endl;
				break;
			}
			j++;
		}
	}
	
	return 0;
}

//const int length = 20000;인 이유는 배열을 통해 각 length 에 대한 sum 값을 
//확인해 봤을때 20000은 되어야 주어진 n의 범위를 충분히 넘기 때문