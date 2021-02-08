#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool comp(string str1, string str2) 
{
	if (str1.length() == str2.length())
	{
		//string 은 str1<str2 를 통해 사전순으로 비교할 수 있음
		return str1 < str2;
	}
	else
		return str1.length() < str2.length();
}

int main()
{
	int N;
	cin >> N;

	vector<string> vec(N);

	for (int i = 0; i < N; ++i)
	{
		string word;
		cin >> word;
		vec[i] = word;
	}

	sort(begin(vec), end(vec), comp);

	for (int i = 0; i < N - 1; ++i)
	{
		if (vec[i] != vec[i + 1])
			cout << vec[i] << "\n";
	}
	cout << vec[N - 1] << endl;

	return 0;
}