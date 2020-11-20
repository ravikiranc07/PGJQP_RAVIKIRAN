#include<iostream>
using namespace std;
class Add
{
    int a1[20],a2[20],sum[20],i,n;
    public : void display()
    {
        cout<<"enter the number of elements in array:";
        cin>>n;
        cout<<"\nenter elements of first array:"<<" ";
        for(i=0;i<n;i++)
        {
            cin>>a1[i];
        }
        cout<<"\nenter elements of second array:"<<" ";
        for(i=0;i<n;i++)
        {
            cin>>a2[i];
        }
        cout<<"\nsum of the arrays:";
        for(i=0;i<n;i++)
        {
            sum[i]=a1[i]+a2[i];
            cout<<sum[i];
        }
    }
};

int main()
{
    Add a1;
    a1.display();
}
