#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int N;
	cin >> N;

	vector<int> vec;

	while(N--)
	{
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}

	sort(vec.begin(), vec.end());

	for (auto e : vec)
		cout << e <<"\n";
	cout << endl;

	return 0;
}