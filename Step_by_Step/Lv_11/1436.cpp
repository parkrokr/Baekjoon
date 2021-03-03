#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool is_evil_num(int n)
{
	int count(0);

	while (n != 0)
	{
		if (n % 10 == 6)
		{
			count++;

			if (count >= 3)
				return true;
		}
		else
			count = 0;

		n /= 10;
	}

	return false;
}

int movie(int N)
{
	int movie_num(666);
	int count(0);
	int result(0);

	while (count != N)
	{
		if (is_evil_num(movie_num))
		{
			result = movie_num;
			count++;
		}
		movie_num++;
	}

	return result;
}

int main()
{
	int N;

	cin >> N;

	cout << movie(N) << endl;
	
	return 0;
}