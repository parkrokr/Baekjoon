#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input_str;

	while (1)
	{
		getline(cin, input_str);
		if (cin.eof())break; // 입력이 끝날때까지 입력받기
		cout << input_str << endl;
	}
	return 0;
}