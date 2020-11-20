#include<iostream>
using namespace std;
class Fibonacci
{
    int n1=0,n2=1,n3,i,num;
    public : void display()
    {
        cout<<"enter the number of elements:";
        cin>>num;
        cout<<n1<<" "<<n2<<" ";
        for(i=2;i<num;i++)
        {
            n3=n1+n2;
            cout<<n3<<" ";
            n1=n2;
            n2=n3;
        }
    }
};
int main()
{
    Fibonacci f1;
    f1.display();
}
