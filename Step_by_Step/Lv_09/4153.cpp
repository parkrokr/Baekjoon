#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int num[3];

	while (true)
	{
		cin >> num[0] >> num[1] >> num[2];

		if (num[0] == 0 && num[1] == 0 && num[2] == 0)break;

		sort(num, num + 3);

		for (int i = 0; i < 3; ++i)
			num[i] = num[i] * num[i];

		if (num[2] == num[0] + num[1])
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}


	return 0;
}