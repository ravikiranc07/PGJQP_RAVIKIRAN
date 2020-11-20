#include<iostream>
using namespace std;
class Average
{
    int n1,n2,n3,n4,n5,res;
    public : int display()
    {
        cout<<"enter the first number:\n";
        cin>>n1;
        cout<<"enter the second number:\n";
        cin>>n2;
        cout<<"enter the third number:\n";
        cin>>n3;
        cout<<"enter the fourth number:\n";
        cin>>n4;
        cout<<"enter the fifth number:\n";
        cin>>n5;
        res=(n1+n2+n3+n4+n5)/5;

        return res;

    }
};
int main()
{
    Average a1;


    int b=a1.display();
    cout<<b;
    if(b>100)
        {
            cout<<"\nthe average is greater than 100";
        }
        else
        {
            cout<<"the average is not greater than 100";
        }
}



