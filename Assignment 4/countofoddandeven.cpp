#include<iostream>
using namespace std;
class Array
{
    int num[10],n,i,x,odd=0,even=0;
    public : void display()
    {
        cout<<"enter the numbers:";
        for(i=0;i<10;++i)
        {
            cin>>num[i];
        }
        cout<<"the array numbers are:";
        for(n=0;n<10;++n)
        {
            cout<<num[n]<<" ";


        }
        for(x=0;x<10;++x)
        {
            if(num[x]%2==0)
            {
                cout<<"\n"<<num[x]<<" ";
                ++even;

            }

        }
        cout<<"these are the even numbers.\n";
        cout<<"\nthe no of even numbers:"<<even;
        for(x=0;x<10;++x)
        {
            if(num[x]%2==1)
            {
                cout<<"\n"<<num[x]<<" ";
                ++odd;

            }

        }
        cout<<"these are the odd numbers.\n";
        cout<<"\nthe number of odd numbers are:"<<odd;




    }
};
int main()
{
    Array a1;
    a1.display();
}

