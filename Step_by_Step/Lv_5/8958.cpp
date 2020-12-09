#include<iostream>
#include<string>

using namespace std;

int main()
{
	const int num = 80;
	int n;
	string str;

	cin >> n;
	
	//std::cin.ignore(numeric_limits < streamsize>::max(), '\n');
	std::cin.ignore(32767, '\n');

	for (int i = 0; i < n; ++i)
	{	
		int count(0), result(0);

		getline(cin, str);
			
		for (int j = 0; j < str.length(); ++j)
		{		
			if (str[j] == 'O')count++;
			else count = 0;

			result += count;
			
		}
		cout <<result << endl;
	}	
	
	return 0;
}

// std::cin.ignore(numeric_limits < streamsize>::max(), '\n'); 사용시 백준에서 컴파일에러 발생
