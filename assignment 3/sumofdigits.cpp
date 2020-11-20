#include<iostream>
using namespace std;
class Sum
{
    int num,sum=0,i;
    public : void display()
    {
        cout<<"enter a number:";
        cin>>num;
        while(num>0)
        {
            i=num%10;
            sum=sum+i;
            num=num/10;
        }
        cout<<sum;
    }
};
int main()
{
    Sum s1;
    s1.display();
}
