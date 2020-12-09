#include<iostream>

using namespace std;

int main()
{
	const int num = 1000;
	int n;
	int total(0), max_score(0);
	double avg(0.0);

	int arr[num];

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		total += arr[i];
		max_score = (max_score < arr[i]) ? arr[i] : max_score;
	}
	
	avg = (static_cast<double>(total) / n) / max_score * 100;

	cout << avg << endl;

	
	return 0;
}