#include<iostream>
using namespace std;
class For_loop
{
    int counter=1;
    public : void display()
    {
        for(counter=1;counter<11;counter++)  //for(;counter<10;counter++) this code is also correct because intialization is done in line 5
        {
            cout<<counter*2<<"\n";

        }
    };
};
int main()
{
    For_loop f1;
    f1.display();

}

