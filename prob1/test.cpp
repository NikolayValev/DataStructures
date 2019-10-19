#define CATCH_CONFIG_MAIN
#include <string>
#include "catch.hpp"
#include "minimum.hpp"
using namespace std;

/**
 * Make alterations to the Circle class as necessary.
 * You may also add additional functions outside of the class
 * as you see necessary.
 **/

class Circle
{
public:
    Circle(double radius = 0) : radius(radius){
    }

    friend bool operator >( const Circle  &lh,const Circle  &rh){
        if (lh.radius > rh.radius) return true;
        else return false;
    }
    friend bool operator ==(const Circle  &lh, const Circle  &rh){
        if (lh.radius == rh.radius) return true;
        else return false;
    }
private:
    double radius;

};

TEST_CASE("Works with integers")
{
    int values[] = {5, 91, 21, 4, 23, 18};
    REQUIRE(minimum(values, 6) == 4);
}

TEST_CASE("Works with stings")
{
    string values[] = {"hello", "cmps231", "ramapo", "go roadrunners"};
    REQUIRE(minimum(values, 4) == "cmps231");
}

TEST_CASE("Works with circles")
{
    Circle values[] = {Circle(5), Circle(17), Circle(4)};
    REQUIRE(minimum(values, 3) == Circle(4));
}
