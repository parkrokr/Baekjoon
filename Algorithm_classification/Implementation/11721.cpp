#include <iostream>
#include <string>

using namespace std;

int main()
{
	string my_str;

	getline(cin, my_str);

	int length = my_str.size();
	
	for (int i = 0; i < length; ++i)
	{
		cout << my_str[i];
		if (i % 10 == 9)cout << '\n';
	}


	return 0;
}


////////////////

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string my_str;

	getline(cin, my_str);

	int length = my_str.size();

	int i = 0;
	while (1)
	{
		int j;
		for (j = i; j < i + 10; ++j)
		{
			if (j >= length)break;
			cout << my_str[j];
		}
		if (j >= length)break;
		i = j;
		cout << endl;
	}

	return 0;
}