#include<iostream>

using namespace std;

int main()
{
	//const int num = 1000000;
	int n,x;
	int max_num = -1000001;
	int min_num = 1000001;

	//int arr[num];

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		max_num = (max_num < x) ? x : max_num;
		min_num = (min_num >x) ? x : min_num;
		/*cin>>arr[i]
		* max_num = (max_num < arr[i]) ? arr[i] : max_num;
		* min_num = (min_num >arr[i]) ? arr[i] : min_num;
		*/
	}

	cout << min_num << " " << max_num;

	return 0;
}

// num = 1000000 인 array arr[num] 을 선언해 사용하면 스택영역의 제한을 받음
