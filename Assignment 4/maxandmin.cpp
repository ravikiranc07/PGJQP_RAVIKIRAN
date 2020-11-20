#include<iostream>
using namespace std;
class Array
{
    int arr[10],n,i,max,min;
    public : void display()
    {
        cout<<"enter the size of an array";
        cin>>n;
        cout<<"\nenter the elements of the array:";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        max=arr[0];
        for(i=0;i<n;i++)
        {
            if(max<arr[i])
                max=arr[i];
        }
        min=arr[0];
        for(i=0;i<n;i++)
        {
            if(min>arr[i])
                min=arr[i];
        }
        cout<<"largest element is:"<<max;
        cout<<"\nsmallest element is:"<<min;
    }


};
int main()
{
    Array a1;
    a1.display();
}
