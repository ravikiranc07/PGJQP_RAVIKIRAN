#include<iostream>
using namespace std;
class Array
{
    int num[10],n,i,x;
    public : void display()
    {
        cout<<"enter the numbers:";
        for(i=0;i<10;++i)
        {
            cin>>num[i];
        }
        cout<<"the numbers are:";
        for(n=0;n<10;++n)
        {
            cout<<num[n]<<" ";

        }
        for(x=0;x<10;++x)
        {
            if(num[x]<0)
        {
            cout<<"\nthe negative numbers are:"<<num[x]<<" ";
        }
        else if(num[x]==0)
        {
            cout<<"\nthe number equal to 0 are:"<<num[x]<<" ";

        }
        else
        {
            cout<<"\nthe positive numbers are:"<<num[x]<<" ";
        }
        }




    }
};
int main()
{
    Array a1;
    a1.display();
}

