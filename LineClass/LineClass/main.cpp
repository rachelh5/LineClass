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

TEST_CASE("To string"){
    SECTION("before to string test"){
        try{
            point toString();
            SUCCEED();
        }
        catch(...){
            FAIL();
        }
    }
}
