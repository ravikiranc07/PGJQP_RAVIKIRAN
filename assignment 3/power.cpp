#include<iostream>
using namespace std;
class Power
{
    int base,num=1,exp,i;
    public : void display()
    {
        cout<<"enter the base number:\n";
        cin>>base;
        cout<<"enter the exponential number:\n";
        cin>>exp;
        for(i=1;i<=exp;i++)
        {
            num=num*base;

        }
        cout<<base<<"^"<<exp<<"="<<num;


    }
};
int main()
{
    Power p1;
    p1.display();
}
