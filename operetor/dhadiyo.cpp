#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

public:
    void setA()
    {
        cout << "enter a :";
        cin >> a;
    }
};

class derived1 : public Base
{
public:
    int i, fact = 1;
    void Addition()
    {
        for (i = 1; i <= a; i++)
        {
            fact = fact * i;
        }
        cout << fact << " " << endl;
    }
};

class derived2 : public Base
{
    int c, i;

public:
    void setc()
    {
        cout << "enter b :";
        cin >> c;
    }
    void product()
    {
        for (i = 1; i <= 10; ++i)
        {
            cout << c << " * " << i << " = " << c * i << endl;
        }
    }
};

int main()
{
    derived1 d1;
    d1.setA();
    d1.Addition();

    derived2 d2;
    d2.setc();
    d2.product();
}