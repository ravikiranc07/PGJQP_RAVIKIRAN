#include<iostream>
using namespace std;
int var1,var2,var3;
class values
{


    public : void assign()
    {
        var1=5;
        var2=10;
        var3=15;

    }

    int display()

    {
        cout<<"the value of variable1 is:"<<var1<<endl;
        cout<<"the value of variablle2 is:"<<var2<<endl;
        cout<<"the value of variable3 is:"<<var3<<endl;


    }
};
int main()
{
    values v1;
    v1.assign();
    var2=20;
    v1.display();

}
