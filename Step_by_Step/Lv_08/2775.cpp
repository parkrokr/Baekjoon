#include <iostream>

using namespace std;

int main()
{
	int T; //test case number

	cin >> T;

	for (int a = 0; a < T; ++a)
	{
		int k, n;

		cin >> k >> n;

		int array[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
		
		for (int i = 0; i < k; ++i)
		{
			int sum(0);

			for (int j = 1; j < 14; ++j)
			{
				sum = array[j] + array[j - 1];
				array[j] = sum;
			}
		}
		cout << array[n - 1] << endl;
	}

	return 0;
}