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
    void operator*=(int a)
    {
        this->x *= a;
        this->y *= a;
    }
    void print()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Point p1(3, 4);
    Point p2(0, 0);
    p1 *= -1;
    p1.print();
}