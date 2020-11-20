#include<iostream>
using namespace std;
class Odd
{
    public : void display()

    {
        for(int i=1;i<=200;i++)
        {
            if(i%2!=0)
                cout<<i<<"\n";
        }

    }
};
int main()
{
    Odd o1;
    o1.display();

}

