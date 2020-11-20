#include<iostream>
using namespace std;
class Factorial
{
    int i,fact=1,num;
    public : void display()
    {
        cout<<"enter any number:";
        cin>>num;
        for(i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        cout<<fact;

    }

};
int main()
{
    Factorial f1;
    f1.display();
}
