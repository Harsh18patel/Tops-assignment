#include <iostream>
#include<conio.h>
using namespace std;

class Calculator {
public:
     sum(float num1,float num2)
    {
       cout<<"sum of float numis: "<<num1+num2<<endl;
    }
     sum(int num1,int num2, int num3) 
    {
      cout<<"sum of int num is: "<<num1+num2+num3<<endl;
    }
     sub(float num1,float num2) 
    {
     cout<<"sub of float is :"<<num1-num2<<endl;
    }
     sub(int num1,int num2, int num3) 
    {
     cout<<"sub of int num is: "<<num1-num2-num3<<endl;
    }
     mul(float num1,float num2) 
    {
    cout<<"mul  of float is: "<<num1*num2<<endl;
    }
     mul(int num1,int num2, int num3) 
    {
       cout<<"mul of int num is: "<<num1*num2*num3<<endl;
    }
     float div(float num1,float num2) 
    {
        cout<<"div is: "<<num1/num2<<endl;
    }
};
int main() {
    Calculator obj;
    obj.sum(8.3,4);
    obj.sum(8,7,12);
    obj.sub(20, 12.7);
    obj.sub(128, 100, 10);
    obj.mul(20.3, 2.2);
    obj.mul(8, 10, 4);
    obj.div(20,12);
    
    getch();
    }