#include<iostream>

using namespace std;

int main()
{
	const int num = 1001;
	int numofstudents,c;
	
	int arr[num];

	cin >> c;

	for (int i = 0; i < c; ++i)
	{
		int total(0), count(0);
		double result;
		double avg(0.0);

		cin >> numofstudents;

		for (int j = 0; j < numofstudents;++j)		
		{
			cin >> arr[j];
			total += arr[j];
		}
		avg = static_cast<double>(total) / numofstudents;

		for (int k = 0; k < numofstudents; ++k)
		{
			if (arr[k] > avg)count++;
		}

		result = 100.0 *static_cast<double>(count) / numofstudents;

		cout << fixed;
		cout.precision(3);
		cout << result <<"%"<< endl;
	}
	
	return 0;
}