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


//using recursion
#include <iostream>

using namespace std;

long long factorial(long long x)
{
	if (x > 1)
	{
		return factorial(x - 1) * x;
	}
	else if(x <= 1)
		return 1;
}

int main()
{
	int n;

	cin >> n;

	cout << factorial(n) << endl;
	

	return 0;
}
