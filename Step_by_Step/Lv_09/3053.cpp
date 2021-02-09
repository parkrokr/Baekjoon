#include <iostream>

using namespace std;

int main()
{
	int R;
	cin >> R;
	static_cast<double>(R);

	const double pi = 3.14159265359;

	double result1 = R * R * pi;
	double result2 = R * R * 2.0;  
	//택시 기하학의 원은 반지름의 두배를 직교하는 대각선으로 갖는 정사각형이다

	cout << fixed;
	cout.precision(6);
	
	cout << result1 << endl;
	cout << result2 << endl;

	return 0;
}