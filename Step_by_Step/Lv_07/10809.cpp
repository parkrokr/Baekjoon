#include<iostream>

using namespace std;

int main()
{
	int array[26]{ 0 };
	char vocab[100];
	
	cin >> vocab;

	for (int i = 0; i < 26; ++i)
		array[i] = -1;
	
	int i = 0;
	while (vocab[i] != '\0')
	{
		int a = (int)vocab[i] - (int)'a';
		
		if (array[a] == -1)
			array[a] = i;	

		++i;
	}

	for (int i = 0; i < 26; ++i)
	{
		cout << array[i] << " ";
	}

	return 0;
}