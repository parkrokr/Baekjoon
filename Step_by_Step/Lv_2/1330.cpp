#include <iostream>

int main()
{
	using namespace std;

	int a, b;

	cin >> a >> b;
	
	if (a == b)
		cout << "==" << endl;

	if (a > b)
		cout << ">" << endl;	

	if(a < b)
		cout << "<" << endl;

	return 0;
}