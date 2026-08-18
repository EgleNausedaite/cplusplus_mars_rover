#include "gtest/gtest.h"

class Coordinate {
    public:
    Coordinate(int x, int y) : _x(x), _y(y) {
    }
    bool operator==(const Coordinate& rhs) const {
        return _x == rhs._x && _y == rhs._y;
    }
    private:
    int _x;
    int _y;
};


class Rover {
    public:
    Rover(int x, int y) {
    }

    Coordinate getPosition() {
        return Coordinate(2,3);
    }
};

TEST(initialise_test, initialise_rover_at_given_position) {
    Rover rover(2, 3);
    EXPECT_EQ(Coordinate(2,3), rover.getPosition());
}