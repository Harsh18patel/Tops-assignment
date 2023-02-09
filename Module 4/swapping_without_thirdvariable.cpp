#include<iostream>
using namespace std;
class Number
{
    float a,b;
    public:

    void value()
    {
        cout<<"value of A : ";
        cin>>a;
        cout<<"value of B : ";
        cin>>b;
        cout<<"value before swapping A: "<<a<<endl;
        cout<<"value before swapping B: "<<b<<endl;
    }
    
     void friends()
    {
        // a=a+b;
        // b=a-b;
        // a=a-b;

        a=a*b;
        b=a/b;
        a=a/b;
        cout<<"value after swapping A: "<<a<<endl;
        cout<<"value after swapping B: "<<b<<endl;
    }
};
int main()
{
    Number h;
    h.value();
    h.friends();
}
