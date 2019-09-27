#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "sorted-list.h"
#include <stdexcept>
using namespace std;

TEST_CASE("Constructor initializes the array correctly") {
  ArrayList al;
  REQUIRE(al.length() == 0);
}

TEST_CASE("Appending changes length") {

  al.insert(5);
  List al;
  al.insert(5);
  al.insert(5);
  al.insert(5);
  al.insert(5);
  al.insert(5);
  REQUIRE(al.get(0) == 5);
}
