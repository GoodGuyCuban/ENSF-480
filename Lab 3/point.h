#ifndef POINT_H
#define POINT_H

class Point{
    private:
        double x;
        double y;
        int id;
    public:
        void display() const;
        Point(double x, double y);
        int counter();
        static int distance(const Point& p1, const Point& p2);
        int distance(const Point& p2);

        double getx() const;
        double gety() const;
        int getId() const;

        void setx(double x);
        void sety(double y);
};

#endif