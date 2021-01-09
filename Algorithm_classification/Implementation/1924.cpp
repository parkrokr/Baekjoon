#include <iostream>
#include <string>

using namespace std;

int main()
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	const string day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT",};

	int x, y, sum_date(0); //x is month, y is date

	cin >> x >> y;

	//1월 1이부터 x 월 y 일까지의 일수 구하기
	for (int i = 0; i+1 < x; i++)
	{
		sum_date += month[i];
	}
	sum_date += y;

	cout << day[(sum_date % 7 )] << endl;;


	return 0;
}