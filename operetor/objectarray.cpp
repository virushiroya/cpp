#include <iostream>

using namespace std;

class test
{
    int m, s;

    public:
    void setdata(int, int);
    void gettotal()
    {
        cout << "total is: " << m + s << endl;
    } 
    void getsub()
    {
        cout << "total is: " << m - s << endl;
    }
};

void test :: setdata(int a, int b)
{
    m = a, s =b;
}

int main()
{
    test t[5];
    int i, a, b;

    for (i=0; i < 3; i++)
    {
        cout<< "enterr a and b: ";
        cin >> a >> b;
        t[i].setdata(a,b);
    } 

    cout << endl
         << endl;
    for (i=0; i<3; i++)
    {
        if(i == 2)
            t[i].gettotal();
        else
            t[i].getsub();    
    }     
    
}