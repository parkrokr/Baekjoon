#include<iostream>

using namespace std;

int main()
{
	const int num = 9;
	int max_num = 0;
	int max_num_idx = 100;

	int arr[num];


	for (int i = 0; i < num; ++i)
	{
		cin >> arr[i];
		if (max_num < arr[i])
		{
			max_num = arr[i];
			max_num_idx = i + 1;
		}
	}

	cout << max_num << '\n' << max_num_idx << endl;

	return 0;
}