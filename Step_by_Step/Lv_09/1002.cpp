#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		double x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		const double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

		double R = (r1 > r2) ? r1 : r2;
		double r = (r1 < r2) ? r1 : r2;

		if (x1 == x2 && y1 == y2 && r1 == r2)
			cout << -1 << endl;
		else if (d == R - r || d == R + r)
			cout << 1 << endl;
		else if (R - r < d && d < R + r)
			cout << 2 << endl;
		else if(d>R+r || d<R-r)
			cout << 0 << endl;
	}


	return 0;
}