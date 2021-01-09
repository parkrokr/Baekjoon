#include <iostream>

using namespace std;

int main()
{
	int N;
	int count(0);

	cin>>N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		
		if (num == 2)count++;

		for (int x = 2; x < num; x++)
		{
			if (num % x == 0)break;
			else if (x == num - 1)count++;
		}

	}
	cout << count << endl;

	return 0;
}