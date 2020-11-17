#include<iostream>
using namespace std;
class Sum
{
    int sum=0;
    public : void display()
    {
        for(int i=1;i<=10;i++)
        {
            sum=sum+i;
        }
        cout<<sum;
    }
};
int main()
{
    Sum s1;
    s1.display();
}

