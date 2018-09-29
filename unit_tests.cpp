//
// Created by Iris L on 2018-09-28.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "stack.hpp"

TEST_CASE("A new stack is empty", "[stack"){
    Stack tester;

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);

}

TEST_CASE("Stack can store a maximum of 10 ints", "[stack")
{
    Stack tester;
    REQUIRE(tester.push(15) == true);
    REQUIRE(tester.push(62) == true);
    REQUIRE(tester.push(44) == true);
    REQUIRE(tester.push(846) == true);
    REQUIRE(tester.push(785) == true);
    REQUIRE(tester.push(65) == true);
    REQUIRE(tester.push(7) == true);
    REQUIRE(tester.push(866) == true);
    REQUIRE(tester.push(19) == true);
    REQUIRE(tester.push(13) == true);
    REQUIRE(tester.push(181) == false);
    REQUIRE(tester.push(42) == false);
    REQUIRE(tester.full() == true);
}


TEST_CASE("Pop can remove from stack", "[stack")
{
    Stack tester;
    REQUIRE(tester.push(1) == true);
    REQUIRE(tester.push(2)== true);
    REQUIRE(tester.push(3) == true);
    REQUIRE(tester.push(4) == true);
    REQUIRE(tester.push(5) == true);
    REQUIRE(tester.push(6) == true);
    REQUIRE(tester.top() == 6);
    REQUIRE(tester.pop() == true);
    REQUIRE(tester.top() == 5);
}

TEST_CASE("Stack cannot pop when empty", "[stack")
{
    Stack tester;
    REQUIRE(tester.empty() == true);
    REQUIRE(tester.pop() == false);
}

TEST_CASE("Print string is empty from Stack","[stack")
{
    Stack tester;
    string test = "empty";
    string stack_string = tester.print();
    REQUIRE(test == stack_string);
}

TEST_CASE("Print string from Stack","[stack") {
    Stack tester;
    string test = "2048";

    REQUIRE(tester.push(2) == true);
    REQUIRE(tester.push(0) == true);
    REQUIRE(tester.push(4) == true);
    REQUIRE(tester.push(8) == true);
    string stack_string = tester.print();
    REQUIRE(test == stack_string);
}
