#include<iostream>
using namespace std;
class Add
{
    int a1[20],count=0,i,n;
    public : void display()
    {
        cout<<"enter the number of elements in array:";
        cin>>n;
        cout<<"\nenter elements of array:"<<" ";
        for(i=0;i<n;i++)
        {
            cin>>a1[i];
        }
        cout<<"\ntotal number of the elements in an array is:";
        for(i=0;i<n;i++)
        {
            ++count;

        }
        cout<<count;
    }
};

int main()
{
    Add a1;
    a1.display();
}


