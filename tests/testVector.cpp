//
// Created by 秦栋梁 on 2020/3/22.
//
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "Vector.hpp"
#include <iostream>

TEST_CASE( "vectors can be sized and resized", "[vector]" ) {
    Vector<int> v( 5 );

    REQUIRE( v.size() == 5 );
    REQUIRE( v.capacity() >= 5 );

    SECTION( "resizing bigger changes size and capacity" ) {
        v.resize(10);

        REQUIRE( v.size() == 10 );
        REQUIRE( v.capacity() >= 10 );
    }

    SECTION( "resizing smaller changes size but not capacity" ) {
        v.resize(0);

        REQUIRE( v.size() == 0 );
        REQUIRE( v.capacity() >= 5 );
    }

    SECTION( "reserving bigger changes capacity but not size" ) {
        v.reserve( 10 );

        REQUIRE( v.size() == 5 );
        REQUIRE( v.capacity() >= 10 );
    }

    SECTION( "reserving smaller does not change size or capacity" ) {
        v.reserve( 0 );

        REQUIRE( v.size() == 5 );
        REQUIRE( v.capacity() >= 5 );
    }
}
