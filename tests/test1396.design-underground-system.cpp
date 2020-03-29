//
// Created by 秦栋梁 on 2020/3/29.
//
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <vector>
#include <map>
#include <string>
#include <solutions/1396.design-underground-system.hpp>

TEST_CASE("test 1396. Design Underground System", "[1396. Design Underground System]") {
    UndergroundSystem undergroundSystem{};
    undergroundSystem.checkIn(45, "Leyton", 3);
    undergroundSystem.checkIn(32, "Paradise", 8);
    undergroundSystem.checkIn(27, "Leyton", 10);
    undergroundSystem.checkOut(45, "Waterloo", 15);
    undergroundSystem.checkOut(27, "Waterloo", 20);
    undergroundSystem.checkOut(32, "Cambridge", 22);

    REQUIRE(undergroundSystem.getAverageTime("Paradise", "Cambridge") == 14.0);
    REQUIRE(undergroundSystem.getAverageTime("Leyton", "Waterloo") == 11.0);

    undergroundSystem.checkIn(10, "Leyton", 24);

    REQUIRE(undergroundSystem.getAverageTime("Leyton", "Waterloo") == 11.0);
    undergroundSystem.checkOut(10, "Waterloo", 38);
    REQUIRE(undergroundSystem.getAverageTime("Leyton", "Waterloo") == 12.0);

}




