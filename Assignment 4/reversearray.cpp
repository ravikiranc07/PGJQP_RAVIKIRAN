#include<iostream>
using namespace std;
class Array
{
    int num[10],n,i,x,size;
    public : void display()
    {
        cout<<"enter size of an array:";
        cin>>size;
        cout<<"enter the numbers:";
        for(i=0;i<size;++i)
        {
            cin>>num[i];
        }
        cout<<"the numbers are:";
        for(n=0;n<size;++n)
        {
            cout<<num[n]<<" ";

        }
        for(n=0;n<size;++n)
        {
             cout<<num[i-n];

        }




    }
};
int main()
{
    Array a1;
    a1.display();
}
