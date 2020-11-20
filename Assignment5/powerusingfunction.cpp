
#include<iostream>
#include<math.h>
using namespace std;
class Func
{
    int base,exp;
    public : int power()
    {
        cout<<"enter the base number:\n";
        cin>>base;
        cout<<"enter the exponential number:\n";
        cin>>exp;
        int res=pow(base,exp);
        cout<<"\nresult is:"<<res;


    }
};
int main()
{
    Func f1;
    f1.power();
}
