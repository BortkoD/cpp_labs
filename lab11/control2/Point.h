#pragma once

class Point {

    public:
        Point () : x(0), y(0) {}
        Point (float, float) {}

        float distanceToCenter (Point);

        friend std::ostream& operator<< (std::ostream&, const Point&);
        Point operator< (const Point&) const;

    private:
        float x;
        float y;
};