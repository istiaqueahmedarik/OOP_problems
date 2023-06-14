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
};

int main()
{
    Point p1(3, 4);
    Point p2(0, 0);
    cout << p1 - p2;
}