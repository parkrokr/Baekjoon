#include <iostream>

using namespace std;


void go_right(int& x, int& y)
{
	y++;
}

void go_left_down(int& x, int& y)
{
	x++;
	y--;
}

void go_down(int& x, int& y)
{
	x++;
}

void go_up_right(int& x, int&y)
{
	x--;
	y++;
}

int main()
{
	//int x(1), y(1); //좌표
	int x(1), y(1);
	int X; // X번째


	cin >> X;


	for (int i = 1; i < X; ++i)
	{
		if (x == 1 && (y % 2 == 1))
			go_right(x, y);

		else if (x == 1 && (y % 2 == 0))
			go_left_down(x, y);

		else if (y == 1 && (x % 2 == 0))
			go_down(x, y);

		else if (y == 1 && (x % 2 == 1))
			go_up_right(x, y);

		else if ((x + y) % 2 == 0)
			go_up_right(x, y);

		else if ((x + y) % 2 == 1)
			go_left_down(x, y);

	}

	cout << x << "/" << y << endl;


	return 0;
}