#include<iostream>
using namespace std;
class Interchange
{
    public : int var1,var2,temp;
    void display()
    {
        var1=5;
        var2=10;
        temp=var1;
        var1=var2;
        var2=var1;


    }
    void display1()
    {
        cout<<"the new value var1 is:"<<var1<<endl;
        cout<<"the new value var2 is:"<<var2<<endl;
    }
};
int main()
{
    Interchange i1;
    i1.display();
    i1.display1();
}
