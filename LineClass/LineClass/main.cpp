//
//  main.cpp
//  LineClass
//
//  Created by Noah Lindner on 4/28/20.
//  Copyright © 2020 Noah Lindner. All rights reserved.
//

#define CATCH_CONFIG_MAIN
#include <iostream>
#include <string>
#include "catch.hpp"
#include "point.hpp"

using namespace std;

TEST_CASE("To string")
{
    SECTION("Testing Constructor"){
        try
        {
            Point test1 = Point(-1, 2);
            FAIL();
        }
        catch (...)
        {
            SUCCEED();
        }

        try
        {
            Point test1 = Point(1, -2);
            FAIL();
        }
        catch (...)
        {
            SUCCEED();
        }

    }
    SECTION("Testing toString()")
    {
        Point testP(1, 2);
        try
        {
            testP.toString();
            SUCCEED();
        }
        catch (...)
        {
            FAIL();
        }
        REQUIRE(testP.toString() == "X: 1.0, Y: 2.0");
    }

    SECTION("Testing Getters"){
        Point testP(1.0, 2.0);
        REQUIRE(abs(testP.getX() - 1.0) <= 0.0000001);
        REQUIRE(abs(testP.getY() - 2.0) <= 0.0000001);

    }
}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    cout << 1 << endl;
//}
