#include <iostream>
#include <vector>
#include <string>

using namespace std;

int check_chess(int n, int m, const vector<string>& chess,string chess1[8])
{
	int result(2500);

	for (int x = 0; x + 8 <= n; ++x)
	{
		for (int y = 0; y + 8 <= m; ++y)
		{
			int count(0);

			for (int i = 0; i < 8; ++i)
			{
				for (int j = 0; j < 8; ++j)
				{
					if (chess[x + i][y + j] != chess1[i][j])
						count++;
				}
			}
			
			if (count < result)
				result = count;
		}
	}
	

	return result;
}

int main()
{
	int n, m, count(0);
	
	cin >> n >> m;
	cin.ignore();

	vector<string>chess;

	for (int i = 0; i < n; ++i)
	{
		string line;
		getline(cin, line);
		chess.push_back(line);
	}

	string chess1[8] = {
		"WBWBWBWBW",
		"BWBWBWBWB",
		"WBWBWBWBW",
		"BWBWBWBWB",
		"WBWBWBWBW",
		"BWBWBWBWB",
		"WBWBWBWBW",
		"BWBWBWBWB"
		
	};

	string chess2[8] = {
		"BWBWBWBWB",
		"WBWBWBWBW",
		"BWBWBWBWB",
		"WBWBWBWBW",
		"BWBWBWBWB",
		"WBWBWBWBW",
		"BWBWBWBWB",
		"WBWBWBWBW"	
	};

	int result1 = check_chess(n,m,chess, chess1);
	int result2 = check_chess(n,m,chess, chess2);

	int min_result = (result1 < result2) ? result1 : result2;
	cout << min_result << endl;

	return 0;
}