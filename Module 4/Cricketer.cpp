#include<iostream>
using namespace std;
class Cricketer
{
    protected:
    string name;
    float total_runs,innings;
    public:

    void Data()
    {
        cout<<"name is : ";
        getline(cin, name);
        cout<<"Total run is :";
        cin>>total_runs;
        cout<<"Total innings is :";
        cin>>innings;
    }
};
class Batsman : public Cricketer
{
    float best_score,average; 
    public:

    void infor()
    {
        cout<<"Best score is:";
        cin>>best_score;
    }    
    

    void careear()
    {
        cout<<"Name is :     "<<name<<endl;
        cout<<"Total run is :  "<<total_runs<<endl;
        cout<<"Total innings is :"<<innings<<endl;
        cout<<"best score is :  "<<best_score<<endl;
        average=total_runs/innings;
        cout<<"average is:     "<<average;
    
        
    }
};
int main()
{
    Batsman a;
    a.Data();
    a.infor();
    a.careear();
}