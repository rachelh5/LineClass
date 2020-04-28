//
//  point.hpp
//  LineClass
//
//  Created by Noah Lindner on 4/28/20.
//  Copyright © 2020 Noah Lindner. All rights reserved.
//

#include <string>

using namespace std;

class point{
private:
    float x;
    float y;
    
public:
    string toString();
    point(float x, float y);
    
};
