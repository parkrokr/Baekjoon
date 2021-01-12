#include <iostream>

using namespace std;

int fibonacci(int n) // n번째 피보나치수 반환
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);

}

int main()
{
	int n;
	cin >> n;

	cout << fibonacci(n) << endl;

	return 0;
}