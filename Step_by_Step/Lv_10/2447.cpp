#include <iostream>
#include <vector>
using namespace std;


void StarSquare(vector<vector<char>>& arr, int size,  int x, int y)
{
	

	if (size == 1)
	{
		arr[x][y] = '*';	
		return;
	}
	
	size /= 3;

	for (int i = 0; i < 3;++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			//i==1&&j==1 일때 정사각형의 중앙
			if (i != 1 || j != 1)
				StarSquare(arr, size, x + i * size, y + j * size);
		}
	}

}


//max N == 6561
int main()
{
	int n;
	cin >> n;

	vector<vector<char>> arr(n, vector<char>(n,' '));

	

	//size, 중앙 좌표
	StarSquare(arr, arr.size(), 0,0);


	//print
	for (auto element : arr)
	{
		for (auto ele : element)
			cout << ele;
		cout << "\n";
	}

	return 0;
}