#include<iostream>
using namespace std;
class Calculator
{
    int choice,n1,n2;
    public : void display()
    {
        cout<<"enter the choice \n1.addition \n2.subtraction \n3.multiplication\n";
        cin>>choice;
        cout<<"enter the value of n1:";
        cin>>n1;
        cout<<"\nenter the value of n2:";
        cin>>n2;
        switch(choice)
        {
            case 1: cout<<"Result is:"<<n1+n2;break;
            case 2: cout<<"Result is:"<<n1-n2;break;
            case 3: cout<<"Result is:"<<n1*n2;break;
            default : cout<<"invalid choice";
        }
    }
};
int main()
{
    Calculator c1;

    c1.display();

}

