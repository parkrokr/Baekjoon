#include <iostream>

using namespace std;

void printArray(int array[],int length)
{
	for (int index = 0; index < length; ++index)
		cout << array[index] << '\n';
	cout << endl;
}

int main()
{
	int length;

	int array[1000] ;

	cin >> length;

	for (int i = 0; i < length; ++i)cin >> array[i];

	for (int i = 0; i < length; ++i)
	{
		
		int value = array[i];
		int index = i;

		for (int j = i + 1; j < length; ++j)
		{
			if (value > array[j])
			{
				index = j;
				value = array[j];
			}
		}
		//swap
		array[index] = array[i];
		array[i] = value;
		
	}
	printArray(array, length);


	return 0;
}