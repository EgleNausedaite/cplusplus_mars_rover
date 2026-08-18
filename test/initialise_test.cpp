#include "gtest/gtest.h"
#include "rover.h"

TEST(initialise_test, initialise_rover_at_given_position) {
    Rover rover(2, 3);
    EXPECT_EQ(Coordinate(2,3), rover.getPosition());
}