//
//  Line.cpp
//  LineClassProject


#include <stdio.h>
#include "Line.hpp"


using namespace std;

bool Line::onLine(Point p){

    float slope;
    slope = (p2.getY() - p1.getY())/(p2.getX() - p1.getX());

    if (abs(slope - (p.getY() - p1.getY())/(p.getX() - p1.getX())) < 0.000001) {
        if ((p.getX() > p1.getX() && p.getX() < p2.getX())  || (p.getX() < p1.getX() && p.getX() > p2.getX()))
            return true;
    }
    return false;
}

float Line::length() {
    float xval = (p1.getX() - p2.getX());
    float yval = (p1.getY() - p2.getY());
    return sqrt((xval * xval) + (yval * yval));
}

bool Line::isParallel(Line line) {
    float slope = (p2.getY() - p1.getY())/(p2.getX() - p1.getX());
    float slope2 = (line.p2.getY() - line.p1.getY())/(line.p2.getX() - line.p1.getX());

    if (abs(slope - slope2) < 0.000001)
        return true;

}

int orientation(Point p, Point q, Point r) 
{ 
    int val = (q.y - p.y) * (r.x - q.x) - 
              (q.x - p.x) * (r.y - q.y); 
  
    if (val == 0) return 0;  // colinear 
  
    return (val > 0)? 1: 2; // clock or counterclock wise 
} 

bool Line::doesCross(Line line) {
    int o1 = orientation(p1, line.p1, p2); 
    int o2 = orientation(p1, line.p1, line.p2); 
    int o3 = orientation(p2, line.p2, p1); 
    int o4 = orientation(p2, line.p2, line.p1); 
  
    // General case 
    if (o1 != o2 && o3 != o4) 
        return true; 
  
    // Special Cases 
    // p1, line.p1 and p2 are colinear and p2 lies on segment p1line.p1 
    if (o1 == 0 && Line(p1, line.p1).onLine(p2))
        return true; 
  
    // p1, line.p1 and line.p2 are colinear and line.p2 lies on segment p1line.p1 
    if (o2 == 0 && Line(p1, line.p1).onLine(line.p2))
        return true; 
  
    // p2, line.p2 and p1 are colinear and p1 lies on segment p2line.p2 
    if (o3 == 0 && Line(p2, line.p2).onLine(p1))
        return true; 
  
     // p2, line.p2 and line.p1 are colinear and line.p1 lies on segment p2line.p2 
    if (o4 == 0 && Line(p2, line.p2).onLine(line.p1))
        return true; 
  
    return false; // Doesn't fall in any of the above cases 
}