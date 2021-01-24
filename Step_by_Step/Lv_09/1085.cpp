#include <iostream>

using namespace std;

int main()
{
	int x, y, w, h;

	cin >> x >> y >> w >> h;

	//x 기준으로 왼쪽 오른쪽중 어느쪽이 더 짧은지 구하기
	int a = x <= (w - x) ? x : (w - x);
	
	//y 기준으로 위 아래 중 어느쪽이 더 짧은지 구하기
	int b = y <= (h - y) ? y : (h - y);
	
	//가로부터의 최솟값과 세로부터의 최솟값중 작은값 구하기
	int min_dis = a <= b ? a : b;

	cout << min_dis << endl;
	return 0;
}