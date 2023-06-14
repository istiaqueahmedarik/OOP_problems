#include <bits/stdc++.h>
using namespace std;
class Point
{
    int x, y;

public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int getX() { return x; }
    int getY() { return y; }
    double operator-(Point b)
    {
        return sqrt(pow(x - b.getY(), 2) + pow(y - b.getY(), 2));
    }
    bool operator>(Point b)
    {
        int Quadrant1 = 0, Quadrant2 = 0;
        if (x >= 0 && y < 0)
            Quadrant1 = 3;
        if (b.getX() >= 0 && b.getY() < 0)
            Quadrant2 = 3;
        if (x < 0 && y >= 0)
            Quadrant1 = 1;
        if (b.getX() < 0 && b.getY() >= 0)
            Quadrant2 = 1;
        if (x < 0 && y < 0)
            Quadrant1 = 2;
        if (b.getX() < 0 && b.getY() < 0)
            Quadrant2 = 2;
        if (Quadrant1 == Quadrant2)
            return x > b.getX();
        else
            return Quadrant1 > Quadrant2;
    }
    bool operator>=(Point b)
    {
        int Quadrant1 = 0, Quadrant2 = 0;
        if (x >= 0 && y < 0)
            Quadrant1 = 3;
        if (b.getX() >= 0 && b.getY() < 0)
            Quadrant2 = 3;
        if (x < 0 && y >= 0)
            Quadrant1 = 1;
        if (b.getX() < 0 && b.getY() >= 0)
            Quadrant2 = 1;
        if (x < 0 && y < 0)
            Quadrant1 = 2;
        if (b.getX() < 0 && b.getY() < 0)
            Quadrant2 = 2;
        if (Quadrant1 == Quadrant2)
            return x >= b.getX();
        else
            return Quadrant1 >= Quadrant2;
    }
};

int main()
{
    Point p1(3, 4);
    Point p2(0, 0);
    if (p1 >= p2)
        cout << "p1 is greater than or equal to p2" << endl;
    else
        cout << "p2 is greater than or equal to p1" << endl;
}