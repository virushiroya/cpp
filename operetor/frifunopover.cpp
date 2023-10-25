// using frd function operator overloading 

#include<istream>

using namespace std;

class box
{
    int l,w,h;

    public:
        void setdata(int a , int b , int c)
        {
            l=a , w=b , h=c ;

        }
        int getvolume()
        {
            return l * w * h;
        }

        friend box operator+(box m , box n)
        {
            box t;
            t.l = m.l + n.l;
            t.w = m.w + n.w;
            t.h = m.h + n.h;
            return t;
        }

        friend box operator++(box m )
        {
            box t;
            t.l = ++m.l;
            t.w = ++m.w;
            t.h = ++m.h;
            return t;
        }
};

int main()
{
    box b1,b2,b3,b4;

    b1.setdata(2,2,2);
    cout << "volume of box b1 is  " << b1.getvolume() << endl;

    b2.setdata(3,3,3);
    cout << "volume of box b2 is  " << b2.getvolume() << endl;

    b3 = b1 + b2;
    cout << "volume of box b3 is  " << b3.getvolume() << endl;

    ++b3;
    b4 = b3;
    cout << "volume of box b4 is  " << b4.getvolume() <<endl;

}