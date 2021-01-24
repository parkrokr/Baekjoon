#include <iostream>
#include <cmath>

using namespace std;

class Point
{
public:
	double m_x;
	double m_y;

	Point(const double& x_in = 0, const double& y_in = 0)
		:m_x(x_in), m_y(y_in)
	{}

	//두점 사이의 거리(연산자 오버로딩)
	double operator - (const Point& point)
	{
		int a = pow(this->m_x - point.m_x, 2);
		int b = pow(this->m_y - point.m_y, 2);
		double c = sqrt(a + b);

		return c;
	}

	Point& operator = (const Point& source)
	{
		this->m_x = source.m_x;
		this->m_y = source.m_y;
		return *this;
	}

	friend istream& operator>>(istream& in,Point& point)
	{
		in >> point.m_x >> point.m_y;

		return in;
	}

	friend ostream& operator<<(ostream& out, Point& point)
	{
		out << point.m_x << " " << point.m_y;

		return out;
	}

	//두점 사이의 중간점 구하기
	Point& middle(const Point& p1, const Point& p2)
	{
		this->m_x =(p1.m_x + p2.m_x)/2;
		this->m_y = (p1.m_y +p2.m_y)/2;

		return *this;
	}

	//한점에서 다른점에 대해 반대방향에 있는 점 구하기
	Point& reverse_vector(const Point& p1, const Point& p2, const Point&p3)
	{
		Point middle;
		middle.middle(p1, p2);

		this->m_x = 2 * middle.m_x - p3.m_x;
		this->m_y = 2 * middle.m_y - p3.m_y;

		return *this;
	}

};

void Print_last_point(Point& p1, Point& p2, Point& p3)
{
	Point result;
	double d1, d2, d3;

	//두점사이의 거리 구하기
	d1 = p1 - p2;
	d2 = p2 - p3;
	d3 = p3 - p1;

	//가장 긴 두점사이의 거리 구하기
	double temp = d1 >= d2 ? d1 : d2;
	double max_distance = temp >= d3 ? temp : d3;

	if (max_distance == d1)
		result.reverse_vector(p1, p2, p3);
	else if (max_distance == d2)
		result.reverse_vector(p2, p3, p1);
	else
		result.reverse_vector(p3, p1, p2);


	cout << result << endl;
}

int main()
{
	//p1,p2,p3가 직각삼각형을 이룰때만 가능
	/*Point p1, p2, p3;
	cin >> p1 >> p2 >> p3;
	Print_last_point(p1, p2, p3);*/
	
	int x[3], y[3];

	for (int i = 0; i < 3; ++i)
	{
		cin >> x[i] >> y[i];
	}

	int a = (x[0] == x[1]) ? x[2] : (x[0] == x[2] ? x[1] : x[0]);
	int b = (y[0] == y[1]) ? y[2] : (y[0] == y[2] ? y[1] : y[0]);
	
	cout << a << " " << b << endl;

	
	return 0;
}