//
//  main.cpp
//  LineClass
//
//  Created by Noah Lindner on 4/28/20.
//  Copyright © 2020 Noah Lindner. All rights reserved.
//

#include <iostream>
#include <string>
#include "catch.hpp"
#include "point.hpp"
#define CATCH_CONFIG_MAIN

using namespace std;

TEST_CASE("To string")
{
    SECTION("before to string test")
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
        REQUIRE(testP.toString() == "X: 1.0, Y: 3.4");

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

        REQUIRE(abs(testP.getX() - 1.0) == 0.0000001);
        REQUIRE(abs(testP.getX() - 2.0) == 0.0000001);
    }
}
