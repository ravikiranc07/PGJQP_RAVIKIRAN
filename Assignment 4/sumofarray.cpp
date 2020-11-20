#include<iostream>
using namespace std;
class Add
{
    int a1[20],sum=0,i,n;
    public : void display()
    {
        cout<<"enter the number of elements in array:";
        cin>>n;
        cout<<"\nenter elements of array:"<<" ";
        for(i=0;i<n;i++)
        {
            cin>>a1[i];
        }
        cout<<"\nsum of the elements in an array is:";
        for(i=0;i<n;i++)
        {
            sum=sum+a1[i];

        }
        cout<<sum;
    }
};

int main()
{
    Add a1;
    a1.display();
}

