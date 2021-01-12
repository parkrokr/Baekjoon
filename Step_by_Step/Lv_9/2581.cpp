#include <iostream>
#include <vector>

using namespace std;

void prime_num(int start_num,int end_num)
{
	int sum(0);

	vector<int> num_v;

	for (int num = start_num; num <= end_num; num++)
	{
		if (num == 2)
		{
			sum += num;
			num_v.push_back(num);
		}
		else
		{
			for (int i = 2; i < num; i++)
			{
				if (num % i == 0)break;
				else if (i == num - 1)
				{
					sum += num;
					num_v.push_back(num);
				}
			}
		}

	}

	if (sum == 0)
		cout << -1 <<  endl;
	else
	{
		cout << sum << "\n" << num_v[0] << endl;
	}
}

void prime_number(int min, int max)
{
	int sum(0);
	int min_num;
	int prime_num_count(0);
		
	for (int i = min; i <= max; i++)
	{
		int count(0);

		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0) count++;
		}

		if (count == 2)
		{
			sum += i;
			prime_num_count++;

			if (prime_num_count == 1)min_num = i;
		}
		


	}

	if (sum == 0)
		cout << -1 << endl;
	else cout << sum << "\n" << min_num << endl;


}

int main()
{
	int m, n;
	cin >> m >> n;

	//prime_num(m, n);

	prime_number(m, n);

	return 0;
}