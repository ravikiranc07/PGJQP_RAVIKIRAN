#include<iostream>
using namespace std;
class Armstrong
{
    int num,n,rem,res=0;
    public : void display()
    {
        cout<<"enter a number:\n";
        cin>>num;
        n=num;
        while(n!=0)
        {
            rem=n%10;
            res += rem*rem*rem;
            n /=10;
        }
        if(res==num)
        {
            cout<<"\nit is a armstrong number";
        }
        else
        {
            cout<<"\nit is not a armstrong number";
        }
    }
};
int main()
{
    Armstrong a1;
    a1.display();
}
