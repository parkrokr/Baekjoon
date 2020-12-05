#include <iostream>


using namespace std;

int main()
{
	int a, b;

	while (1)
	{
		cin >> a >> b;
		
		if (cin.eof())break; //EOF를 만나면 break
		
		cout << (a + b) << endl;
	}
	
	return 0;
}