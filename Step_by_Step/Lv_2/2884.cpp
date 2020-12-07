#include <iostream>

int main()
{
	using namespace std;

	int H, M;

	cin >> H >> M;

	if (M >= 45)
		M = M - 45;
	else
	{
		H = ((H + 24) - 1) % 24;
		M = M + 15;
	}

	cout << H << " " << M << endl;
	

	return 0;
}