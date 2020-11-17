#include<iostream>
using namespace std;
class Loop
{
    int counter=0;
    public : void display()
    {
        for(counter=0;counter<5;counter++)  //for(;counter<10;counter++) this code is also correct because intialization is done in line 5
        {
            cout<<counter<<"Ravi\n";

        }
    };
};
int main()
{
    Loop l1;
    l1.display();

}

