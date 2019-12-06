#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "hash.h"
#include <stdexcept>
TEST_CASE("Constructor initializes correctly") {
  Hash h;
  h.insert(15);
  REQUIRE(h.find(15) == true);
}
TEST_CASE("Numbers inserted correctly inserted ") {
  Hash h;
  h.insert(15);
  h.insert(14);
  h.insert(13);
  h.insert(12);
  h.insert(25);

  REQUIRE(h.find(15) == true);
  REQUIRE(h.find(14) == true);
  REQUIRE(h.find(13) == true);
  REQUIRE(h.find(12) == true);
  REQUIRE(h.find(25) == true);
}
TEST_CASE("Numbers deleted correctly inserted ") {
  Hash h;
  h.insert(15);
  h.insert(14);
  h.insert(13);
  h.insert(12);
  h.insert(25);

  REQUIRE(h.find(15) == true);
  REQUIRE(h.find(14) == true);
  REQUIRE(h.find(13) == true);
  REQUIRE(h.find(12) == true);
  REQUIRE(h.find(25) == true);

  h.remove(15);
  h.remove(14);
  h.remove(13);
  h.remove(12);
  h.remove(25);

  REQUIRE(h.find(15) == false);
  REQUIRE(h.find(14) == false);
  REQUIRE(h.find(13) == false);
  REQUIRE(h.find(12) == false);
  REQUIRE(h.find(25) == false);
}
TEST_CASE("Rehashing test") {
  Hash h;
  h.insert(15);
  h.insert(25);
  h.insert(35);
  h.insert(45);
  h.insert(55);
  h.insert(65);
  h.insert(75);
  h.insert(85);

  REQUIRE(h.find(15) == true);
  REQUIRE(h.find(25) == true);
  REQUIRE(h.find(35) == true);
  REQUIRE(h.find(45) == true);
  REQUIRE(h.find(55) == true);
  REQUIRE(h.find(65) == true);
  REQUIRE(h.find(75) == true);
  REQUIRE(h.find(85) == true);
}
