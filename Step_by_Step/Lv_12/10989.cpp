#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int>count(10001);

	int max(0);
	while(N--)
	{
		int temp;
		cin >> temp;
		count[temp]++;
		/*if (max < temp)
			max = temp;*/
	}
	//count.resize(max+1);

	//print
	for (int i = 0;i<10001;++i)
	{
		if (count[i] != 0)
			for (int j = 0; j < count[i]; ++j)
				cout << i << '\n';
	}
	cout << endl;

	return 0;
}