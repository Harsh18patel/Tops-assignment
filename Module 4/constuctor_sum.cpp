#include <iostream>
using namespace std;

class Calculator
{
protected:
    float a, b;

public:
    Calculator(int x, int y)
    {
        a = x;
        b = y;
    }

    void addition()
    {
        float addition = a + b;

        cout << "addition is: " << addition << endl;
    }
    void sub()
    {
        float sub = a - b;

        cout << "substraction is: " << sub << endl;
    }
    void mul()
    {
        float mul = a * b;

        cout << "multiplication is: " << mul << endl;
    }
    void div()
    {
        float div = a / b;

        cout << "division is: " << div << endl;
    }
};
int main()
{
    Calculator z(12, 5);
    z.addition();
    z.sub();
    z.mul();
    z.div();
}