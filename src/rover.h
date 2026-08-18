#ifndef ROVER_H
#define ROVER_H

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

#endif
