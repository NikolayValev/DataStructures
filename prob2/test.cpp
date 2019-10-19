#define CATCH_CONFIG_MAIN
#include <string>
#include <vector>
#include <cmath>
#include "catch.hpp"
#include "linked-list.hpp"
using namespace std;

void require_matching_contents(const List<int> &list, const std::vector<int> &values)
{
    auto it = list.begin();
    int k = 0;
    for (auto i = list.begin(); i.valid(); i.forward())
    {
        REQUIRE(i.data() == values[k]);
        k++;
    }
    REQUIRE(k == values.size());
}

TEST_CASE("Remove")
{
    List<int> list;
    vector<int> match = {0, 5, 10, 15, 20, 25};
    for (int i = 0; i < match.size(); i++)
    {
        list.push_back(match[i]);
    }

    auto i = list.begin();
    i.forward();
    list.remove(i); // Remove 5
    require_matching_contents(list, vector<int>{0, 10, 15, 20, 25});

    i = list.end();
    i.back();
    list.remove(i); // Remove 20
    require_matching_contents(list, vector<int>{0, 10, 15, 25});

    i = list.end();
    list.remove(i); // Remove 25
    require_matching_contents(list, vector<int>{0, 10, 15});
}

TEST_CASE("Sum (int)")
{
    List<int> list;
    vector<int> match = {0, 5, 10, 15, 20, 25};
    for (int i = 0; i < match.size(); i++)
    {
        list.push_back(match[i]);
    }

    auto start = list.begin();
    auto end = list.end();
    REQUIRE(sum(start, end) == 75);

    start.forward();
    start.forward();
    end.back();
    REQUIRE(sum(start, end) == 45);
}

TEST_CASE("Sum (double)")
{
    List<double> list;
    vector<double> match = {42.6, 87.1, 23.4, 123.7, 86.7, 14.0, 16.7};
    for (int i = 0; i < match.size(); i++)
    {
        list.push_back(match[i]);
    }

    auto start = list.begin();
    auto end = list.end();
    REQUIRE(abs(sum(start, end) - 391) < 0.001);
}
