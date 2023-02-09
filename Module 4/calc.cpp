#include<iostream>
using namespace std;
class Calc
{
    protected:
    int a,b;
    public:

    void addition()
    {
        a=20;
        b=14;

        cout<<"addition is.."<<a+b<<endl;
    }
    void sub()
    {
        a=20;
        b=14;

        cout<<"sub is .."<<a-b<<endl;
    }
     void multiplication()
    {
        a=20;
        b=14;

        cout<<"multiplication is.."<<a*b<<endl;
    }
     void divison()
    {
        a=20;
        b=14;

        cout<<"divison is.."<<(float)a/b<<endl;
    }
     void modulus()
    {
        a=20;
        b=14;

        cout<<"addition is.."<<a%b<<endl;
    }
};
int main()
{
    Calc z;
    z.addition();
    z.sub();
    z.multiplication();
    z.divison();
    z.modulus();
}