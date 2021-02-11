#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

void findcards(const vector<int>& cards, const int& m)
{
	//vector<int> result;
	int sum(0);
	int result(0);

	for (int i = cards.size() - 1; i >= 2; --i)
	{
		for (int j = i - 1; j >= 1; --j)
		{
			for (int k = j - 1; k >=0; --k)
			{
				sum = cards[i] + cards[j] + cards[k];
				if (sum == m)
				{
					cout << m << endl;
					return;
				}
				else if (sum < m && result < sum)
				{
					result = sum;
				}
				/*else if (sum < m)
				{
					result.push_back(cards[i] + cards[j] + cards[k]);
				}*/

			}
		}
	}

	//auto max = max_element(result.begin(), result.end());
	//cout << *max << endl;

	cout << result << endl;
	return;
}


int main()
{
	int n, m;
	cin >> n >> m;


	vector<int> cards;
	

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		cards.push_back(x);
	}

	//sort(cards.begin(), cards.end());

	findcards(cards, m);
	
	return 0;
}