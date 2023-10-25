// homework_up_2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct point 
{	
	double m_x;
	double m_y;
	point()
	{
		m_x = 0;
		m_y = 0;
	}
	point(double x, double y) 
	{
		this->m_x = x;
		this->m_y = y;
	}
};

void print_point(const point& point_object) {
	std::cout << "x:" << point_object.m_x << ", y: "
		<< point_object.m_y << std::endl;
};

int main()
{
	const int LENGTH = 5;
	point my_point[LENGTH];	
	for (int i = 0; i < 5; i++)
	{
		point my_point(i, i*2);
		print_point(my_point);
	}
	return 0;
}