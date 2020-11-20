#include<iostream>
using namespace std;
class Alphabet
{
    char c;
    public : void display()
    {
        for(c='A';c<='Z';c++)
        {
            cout<<c<<"\n";
        }
    }
};
int main()
{
    Alphabet a1;
    a1.display();
}
