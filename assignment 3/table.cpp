#include<iostream>
using namespace std;
class Table
{
    int i,num;
    public : void display()
    {
        cout<<"enter any number\n";
        cin>>num;
        for(i=1;i<=10;i++)
        {
            cout<<"\n"<<num*i;
        }
    }
};
int main()
{
    Table t1;
    t1.display();
}
