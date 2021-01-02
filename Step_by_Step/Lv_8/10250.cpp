#include <iostream>

using namespace std;

int main()
{
	int T; //test case 

	int H, W, n;

	cin >> T;

	for (int t = 0; t < T; t++)
	{
		cin>> H >> W >> n;

		int room_num(0);

		if ((n % H) == 0)
		{
			room_num = (n / H) + H * 100;
		}
		else
		{
			room_num = (n / H) + 1 + (n - (n / H)*H) * 100;
		}

		cout << room_num << endl;


	}

	return 0;
}