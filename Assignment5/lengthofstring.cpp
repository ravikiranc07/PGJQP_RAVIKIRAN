#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Reverse
{
    string txt;
    public : int display()
    {
        cout<<"\n enter a string:";
        cin>>txt;
        cout<<"the reverse of the string is:"<<strrev(txt);
    }
};
int main()
{
    Reverse r1;
    r1.display();

}

