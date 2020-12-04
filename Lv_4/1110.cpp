#include<iostream>

using namespace std;

int main()
{		
	int count = 0;
	int x, y, a, b;
	cin >> x;
    y = x;

	while (1)
	{		
		if (x < 10)
		{
			a = 0;
			b = x;
		}
		else
		{
			a = x / 10;
			b = x % 10;
		}

		x = ((b * 10) + ((a + b) % 10));
		
		count++;

		if (y == x)break;
	}
	
	cout << count << endl;;

	return 0;
}