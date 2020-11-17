#include<iostream>
using namespace std;
class Prime
{
    int num,i;
    public : void display()
    {
        cout<<"enter the number:";
        cin>>num;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                cout<<"it is not a prime number";break;
            }
        else
        {
            cout<<"it is a prime number";break;
        }
        }
    }
};
int main()
{
    Prime p1;
    p1.display();
}
