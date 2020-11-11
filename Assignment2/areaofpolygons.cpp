#include<iostream>
using namespace std;
class Area
{
    int choice,l,b;
    public : void display()
    {
        cout<<"enter the choice \n1.square \n2.rectangle \n3.parrallelogramc\n4.rhombus";
        cin>>choice;
        cout<<"enter the value of l:";
        cin>>l;
        cout<<"\nenter the value of b:";
        cin>>b;
        switch(choice)
        {
            case 1: cout<<"Result is:"<<l*b;break;
            case 2: cout<<"Result is:"<<l*b;break;
            case 3: cout<<"Result is:"<<l*b;break;
            case 4: cout<<"Result is:"<<l*b;break;
            default : cout<<"invalid choice";
        }
    }
};
int main()
{
    Area a1;
    a1.display();

}

