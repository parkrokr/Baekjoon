#include<iostream>

using namespace std;

int main()
{
	char word[1000000];
	int alphabet[26]{ 0 };

	cin >> word;

	int i = 0;
	while (word[i] != '\0')
	{
		if ((int)word[i] > 96)
			alphabet[(int)word[i] - (int)'a']++;
		else
			alphabet[(int)word[i] - (int)'A']++;

		++i;
	}

	int max(0);
	int loc(0);
	for (int i = 0; i < 26; ++i)
	{
		if (alphabet[i] > max)
		{
			max = alphabet[i];
			loc = i;
		}
	}

	int count(0);
	for (int i = 0; i < 26; ++i)
	{
		if (alphabet[i] == max)
			count++;
	}

	if (count == 1)
		cout << (char)(loc + 65) << endl;
	else
		cout << "?" << endl;
	
	return 0;
}