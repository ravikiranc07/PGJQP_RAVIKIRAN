#include<iostream>
using namespace std;
class Palindrome
{
    int rev=0,rem,num,n;
    public : void display()
    {
        cout<<"enter the number";
        cin>>num;
        n=num;
        while(num>0)
        {
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        cout<<"reverse:"<<rev<<"\n";
        if(rev==n)
        {
            cout<<"it is a palindrome";
        }
        else
        {
            cout<<"it is not a palindrome";
        }
    }


};
int main()
{
    Palindrome p1;
    p1.display();
}
