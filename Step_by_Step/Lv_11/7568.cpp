#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> weights;
	vector<int> heights;

	for (int i = 0; i < n; ++i)
	{
		int temp_height, temp_weight;
		cin >> temp_weight >> temp_height;

		weights.push_back(temp_weight);
		heights.push_back(temp_height);
	}

	for (int i = 0; i < n; ++i)
	{
		int count(0);

		for (int j = 0; j < n; ++j)
		{
			if (i != j)
			{
				if (weights[i] < weights[j] && heights[i] < heights[j])
					count++;
			}
		}
		cout << count+1 << " ";
	}
	cout << endl;

	return 0;
}