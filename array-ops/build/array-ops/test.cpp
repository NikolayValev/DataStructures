#define CATCH_CONFIG_MAIN
#include "array.h"
#include "catch.hpp"

TEST_CASE("Find on empty array","[empty]") {
    int data[10];
    REQUIRE(find(data, 0, 15) == -1);
}

TEST_CASE("Find on an array with contents","[find]") {
    int data[5];
    int count = 0;

    append(data, count, 3, 15);
    append(data, count, 3, 25);
    append(data, count, 3, 35);


    REQUIRE(find(data, count, 15) == 0);
    REQUIRE(find(data, count, 25) == 1);
    REQUIRE(find(data, count, 35) == 2);
    REQUIRE(find(data, count, 55) == -1);
}

TEST_CASE("Appending","[appended]") {
    int data[10];
    int count = 0;
    bool result = append(data, count, 10, 15);
    REQUIRE(result == true);
    REQUIRE(data[0] == 15);
    REQUIRE(count == 1);

    result = append(data, count, 10, 25);
    REQUIRE(result == true);
    REQUIRE(data[0] == 15);
    REQUIRE(data[1] == 25);
    REQUIRE(count == 2);

    result = append(data, count, 10, 35);
    REQUIRE(result == true);
    REQUIRE(data[0] == 15);
    REQUIRE(data[1] == 25);
    REQUIRE(data[2] == 35);
    REQUIRE(count == 3);
}


TEST_CASE("Appending when out of bounds","[appended]") {
    int data[3];
    int count = 0;
    append(data, count, 3, 15);
    append(data, count, 3, 25);
    append(data, count, 3, 35);

    bool result = append(data, count, 3, 45);
    REQUIRE(result == false);
    REQUIRE(count == 3);
}

