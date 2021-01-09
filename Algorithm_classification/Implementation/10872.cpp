#include <iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;

	long long result(1);

	for (; N > 0; N--)
	{
		result *= N;
	}
	cout << result;
	
	return 0;
}