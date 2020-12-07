#include<iostream>

using namespace std;

int  main()
{
	int a, b, c;
	
	cin >> a>>b>>c;

	if (a > b)
	{
		if (a > c) //a is max
		{
			if (c >= b)cout << c << endl;
			else cout << b << endl;
		}
		else cout << a << endl;
	}
	else if (a == b)cout << a << endl;
	else //a < b
	{
		if (a >= c)cout << a << endl;
		else//a<< b,c
		{
			if (b >= c)cout << c << endl;
			else cout <<  b << endl;
		}
	}


	return 0;
}