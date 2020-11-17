#include<iostream>
using namespace std;
class Reverse
{
    int counter=10;
    public : void display()
    {
        for(counter=10;counter>=1;counter--)  //for(;counter<10;counter++) this code is also correct because intialization is done in line 5
        {
            cout<<counter<<"\n";

        }
    }

};
int main()
{
    Reverse r1;
    r1.display();

}

