#include<iostream>
using namespace std;
class Search
{
    int arr[10],i,num,size;
    public : void display()
    {
        cout<<"\n enter array size:";
        cin>>size;
        cout<<"\n enter array elements:\n";
        for(i=0;i<size;i++)
        {
            cout<<" ";
            cin>>arr[i];
        }
        cout<<"\n the elements are:";
        for(i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }

        if(arr[i]>=0)
        {
            cout<<arr[i];
        }
        else
        {
            arr[i]==0;
            cin>>arr[i];

        }

        cout<<"\n New array is::";
        for(i=0;i<size+1;i++)
        {
            cout<<arr[i]<<" ";
        }

    }
};
int main()
{
    Search s1;
    s1.display();
}


