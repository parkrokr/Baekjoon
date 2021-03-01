#include <iostream>
#include <vector>
#include <string>

using namespace std;

int check_chess(const vector<string>& chess, const string& chess1[8])
{
	int result(100);

	int x(0), y(0);
	while (x + 8 <= m && y + 8 <= n)
	{
		int count(0);
		for (int i = 0; i < 8; ++i)
		{
			for (int j = 0; j < 8; ++j)
			{
				if (chess[x][y] != chess1[i][j])
					count++;
			}
		}
		if (count < result1)
			result = count;

		if (x + 8 != m)
			x++;
		if (y + 8 != n)
			y++;
	}

	return result;
}

int main()
{
	int n, m, count(0);
	cin >> m >> n;

	vector<string>chess;

	for (int i = 0; i < n; ++i)
	{
		getlin(cin, chess[i]);
	}
	
	string chess1[8] = {
		"W,B,W,B,W,B,W,B,W",
		"B,W,B,W,B,W,B,W,B",
		"W,B,W,B,W,B,W,B,W",
		"B,W,B,W,B,W,B,W,B",
		"W,B,W,B,W,B,W,B,W",
		"B,W,B,W,B,W,B,W,B",
		"W,B,W,B,W,B,W,B,W",
		"B,W,B,W,B,W,B,W,B",
	};

	string chess2[8] = {
		"B,W,B,W,B,W,B,W,B",
		"W,B,W,B,W,B,W,B,W",
		"B,W,B,W,B,W,B,W,B",
		"W,B,W,B,W,B,W,B,W",
		"B,W,B,W,B,W,B,W,B",
		"W,B,W,B,W,B,W,B,W",
		"B,W,B,W,B,W,B,W,B",
		"W,B,W,B,W,B,W,B,W"
	};

	result 1 = check_chess(chess, chess1);
	result 2 = check_chess(chess, chess2);

	cout << result 1 << " " << result2 << endl;


	return 0;
}