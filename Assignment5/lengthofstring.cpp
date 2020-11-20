#include<iostream>
using namespace std;
class Length
{
    string txt;
    public : int display()
    {
        cout<<"\n enter a string:";
        cin>>txt;
        cout<<"the length of the string is:"<<txt.length();
    }
};
int main()
{
    Length l1;
    l1.display();

}

