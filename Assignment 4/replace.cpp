#include<iostream>
using namespace std;
class Search
{
    int arr[10],i,num,pos,size;
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
        cout<<"\n enter position to insert number::";
        cin>>pos;
        if(pos>size)
        {
            cout<<"\nthis is out of range";
        }
        else
        {
            cout<<"\nenter number to be inseted:";
            cin>>num;
            --pos;
        }
        for(i=size;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=num;
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

