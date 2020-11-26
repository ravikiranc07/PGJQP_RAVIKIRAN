#include<iostream>
using namespace std;
class Add
{
    int n,sum=0;
    public : void display()
    {
        cin>>n;
        for(int i=0;i<=n;i++)
        {
            sum=sum+n;
        }
        cout<<sum;
    }
};
int main()
{
    Add a1;
    a1.display();
}
