#include<iostream>

using namespace std;

class base
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"enter a: ";
        cin>>a;
    }
};

class derived1  : public base
{
    int b;
    public:
    void setB()
    {
       cout<<"enter b: ";
        cin>>b;
    }
    void addition()
    {
        cout << "addition of a and b is:"<<a+b<<endl; 
    }
};
class derived2  : public base
{
    int c;
    public:
    void setC()
    {
       cout<<"enter b: ";
        cin>>c;
    }
    void product()
    {
        cout << "addition of a and b is:"<<a*c<<endl; 
    }
};

int main()
{
    derived1 d1;
    d1.setA();
    d1.setB();
    d1.addition();

    derived2 d2;
    d2.setA();
    d2.setC();
    d2.product();
}