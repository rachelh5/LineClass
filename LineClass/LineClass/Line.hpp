#pragma once
#include <string>
#include "point.hpp"

using namespace std;

class Line
{
private: 
	Point p1;
	Point p2;

public:
	bool onLine(Point point1);
	float length();
	bool isParallel(Line line1);
	bool doesCross(Line line1);
	Line(Point p1, Point p2);

};
