#include<iostream>
using namespace std;
class Add
{
    int n1,n2,res;
    public : void addition()
    {
        cout<<"enter the first number:\n";
        cin>>n1;
        cout<<"enter the second number:\n";
        cin>>n2;
        res=n1+n2;
        cout<<"result is:"<<res;
        if(res>100)
        {
            cout<<"\nthe result is greater than 100";
        }
        else
        {
            cout<<"\nthe result is not greater than 100";
        }

    }
};
int main()
{
    Add a1;
    a1.addition();
}

