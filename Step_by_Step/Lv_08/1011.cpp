#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int T; //test case number
	long long x, y;

	cin >> T; 
	
	for (int i = 0; i < T; ++i)
	{
		cin >> x >> y;

		double d = y - x; //distance between x, y

		double count;

		count = round(sqrt(d));

		if (sqrt(d)<= count)
			cout << 2*(int)count -1  << endl;
		else
			cout << 2*(int)count<< endl;	
	}

	return 0;
}