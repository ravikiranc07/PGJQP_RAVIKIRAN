#include<iostream>
using namespace std;
class EvenOdd
{
    int num;
    public : int display()
    {
        cout<<"enter the number";
        cin>>num;
        return num;


    }
};
int main()
{
    EvenOdd obj1;
    int b=obj1.display();
    cout<<b;
    if(b%2==0)
        {
            cout<<"\nthe number is even";
        }
        else
        {
            cout<<"\nthe number is odd";
        }
        if(b<0)
        {
            cout<<"\nthe number is negative";
        }
        else if(b==0)
        {
            cout<<"\nthe number is zero";

        }
        else
        {
            cout<<"\nthe number is positive";
        }


}
