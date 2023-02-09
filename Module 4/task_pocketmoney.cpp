#include <iostream>
#include<string>
using namespace std;
class father
{
protected:
    string name;
    int pocketmoney;

public:
    void data()
    {
        cout << "father name is : ";
        getline(cin, name);
        cout << "pocket money from father is : ";
        cin >> pocketmoney;
        cin.ignore();
    }
};
class mother
{
protected:
    string name2;
    int pocketmoney2;

public:
    void information()
    {
        cout << "mother name is : ";
        getline(cin, name2);
        cout << "pocket money from mother is : ";
        cin >> pocketmoney2;
        
    }
};
class child : public father, public mother
{
public:
    void display()
    {
        cout << "father name is: " << name << endl;
        cout << "pocket money from father is : " << pocketmoney << endl;
        cout << "-------------------------" << endl;
        cout << "mother name is: " << name2 << endl;
        cout << "pocket money from mother is : " << pocketmoney2 << endl;
        cout << "------------------------------" << endl;
        cout << "total pocketmoney i have is : " << pocketmoney + pocketmoney2 << endl;
    }
};
int main()
{
    child z;
    z.data();
    z.information();
    z.display();
}