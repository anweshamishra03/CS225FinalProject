#ifndef CATCH_CONFIG_MAIN
#define CATCH_CONFIG_MAIN
#endif
#include "catch.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stack>

using namespace std;

TEST_CASE("PUT YOUR TESTS HERE!!!", "[tag1][tag2]") {
    // Feel free to use this to put your own test cases.
    // Look at other test files for inspiration!
    string expected = "I put my own test cases here.";
    string actual = "I DON'T HAVE ANY TEST CASES :'(";
    REQUIRE(expected == actual);
}