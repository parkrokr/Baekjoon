#include <iostream>
#include <algorithm>  //to use max()

using namespace std;

void print_array(const int* array,int length)
{
	for (int i = 0;i<length;i++)
		cout << array[length - 1 - i];
	cout << endl;
}

int main()
{
	char get_num1[10001];
	char get_num2[10001];
	
	int num1[10001];
	int num2[10001];
	int result[10001];

	
	cin >> get_num1>> get_num2;
	
	int length_num1 = 0;					//길이 구하기
	while (get_num1[length_num1] != '\0')
		length_num1++;

	int length_num2 = 0;					//길이 구하기
	while (get_num2[length_num2] != '\0')
		length_num2++;

	for (int i = 0; i < length_num1; ++i)	//배열에 복사
	{
		num1[length_num1 -1- i] = get_num1[i] - '0';
	}
	for (int i = 0; i < length_num2; ++i)	//배열에 복사
	{
		num2[length_num2 -1 - i] = get_num2[i] - '0';
	}
	
	int carry(0);

	for (int i = 0; i < max(length_num1, length_num2); ++i)
	{
		result[i] = num1[i] + num2[i] + carry;
		
		if (result[i] >= 10)
		{
			result[i] -= 10;
			carry = 1;
		}
		else carry = 0;
	}
	
	if (carry)cout << 1;
	print_array(result, max(length_num1, length_num2));
	
	return 0;
}