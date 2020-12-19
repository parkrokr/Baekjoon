#include<iostream>

using namespace std;

int main()
{
	int t;
	int r;
	char p[20];

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		cin >> r >> p;
		
		int j = 0;
		while(p[j]!='\0')
		{
			for (int k = 0; k < r; ++k)
			{
				cout << p[j];
			}
			j++;
		}
		cout << endl;

	}
	
	return 0;
}