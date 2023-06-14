#include <bits/stdc++.h>
using namespace std;
/// @brief A and F abstact class karon fa ke F e override kora hoy nai so eta virtual theke jabe
/// @brief F ,g te ekta and c , d te ekta, total duita diamond problem
/// @brief virtual vabe jake inherit krbo take prer shb level e bar bar construct kora lagbe
class A
{
    int a1;

protected:
    int a2;

public:
    string a3;
    A(int a1, int a2, string a3)
    {
        this->a1 = a1;
        this->a2 = a2;
        this->a3 = a3;
    }
    virtual int fa() = 0;
    void display()
    {
        cout << a1 << " " << a2 << " " << a3 << endl;
    }
    int getA1() { return a1; }
};
class B : virtual public A
{
    double b1;
    int fb() { return b1 + b2; }

protected:
    int b2;

public:
    B(int a1, int a2, string a3, double b1, int b2) : A(a1, a2, a3)
    {
        this->b1 = b1;
        this->b2 = b2;
    }
    int fa() { return getA1() + a2 + b1 + b2; }
    double getB1() { return b1; }
    int getFb() { return fb(); }
    operator double() { return b1; }
};
class F : virtual public A
{
protected:
    float f1;

public:
    F(int a1, int a2, string a3, float f1) : A(a1, a2, a3)
    {
        this->f1 = f1;
    }
    int ff() { return f1 + getA1() + a2; }
};
class G : private F, public B
{
public:
    char g;
    G(char g, int a1, int a2, string a3, float f1, int b1, int b2) : F(a1, a2, a3, f1), B(a1, a2, a3, b1, b2), A(a1, a2, a3)
    {
        this->g = g;
    }
    int ff() { return f1 + getA1() + a2 + (int)g; }
    int fa() { return getA1() + a2 + getB1() + b2; }
    int fb() { return getFb(); }
};
class C : virtual public B
{
public:
    int c1;
    C(int c1, int a1, int a2, string a3, double b1, int b2) : B(a1, a2, a3, b1, b2), A(a1, a2, a3)
    {
        this->c1 = c1;
    }
};
class D : virtual public B
{
public:
    int d1;
    D(int d1, int a1, int a2, string a3, double b1, int b2) : B(a1, a2, a3, b1, b2), A(a1, a2, a3)
    {
        this->d1 = d1;
    }
};
template <class T>
class E : public C, public D
{
public:
    T e1;
    E(T e1, int c1, int d1, int a1, int a2, string a3, double b1, int b2) : C(c1, a1, a2, a3, b1, b2), D(d1, a1, a2, a3, b1, b2), A(a1, a2, a3), B(a1, a2, a3, b1, b2)
    {
        this->e1 = e1;
    }
};
int main()
{
    B b(1, 2, "abc", 3.14, 4);
    C c(1, 2, 3, "ab", 4.5, 6);
    D d(1, 2, 3, "ab", 4.5, 6);
    E<float> e(1.1f, 1, 2, 3, 4, "abc", 5.5, 6);
    G g('a', 2, 4, "abc", 1.4f, 4, 5);
    g.fb();
    g.ff();
    A *ptr;
    ptr = &b;
    ptr->display();
    double d1 = b;
}