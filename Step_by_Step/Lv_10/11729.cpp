#include <iostream>
#include <math.h>

using namespace std;

void move(int from, int to)
{
	cout << from << " " << to <<'\n';
	
}

//n개의 원반을 a 에서 c로 옮김, b를 경유해서
void hanoi(int n, int a,int b, int c)	
{
	if (n == 1)				//원반이 하나일땐 그냥 옮기고 종료
		move(a, c);
	else
	{
		hanoi(n - 1, a, c, b);	//n-1 개의 원반을 b 로 옮김(c 를 경유해서)
		move(a, c);				//a 에 남아있던 하나를 c 로 옮김
		hanoi(n - 1, b, a, c);	//n-1 개의 원반을 c 로 옮김(b를 경유해서)
	}
}



int main()
{
	int k;
	cin >> k;

	
	cout << (int)pow(2, k) - 1 << endl;			//pow 의 return type 이 float 라서 int 로 cast
	hanoi(k, 1, 2, 3);
	
	return 0;
}