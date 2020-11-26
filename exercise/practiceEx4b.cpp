#include<iostream>
using namespace std;
class test
{
    int var1=10,var2=20;
    public : void disp()
    {
        cout<<"var1="<<var1<<endl;
        cout<<"var2="<<var2<<endl;
    }
};
class sample
{
    public:void display()
    {
        cout<<"var1="<<var1;
        cout<<"var2="<<var2;
    }
};
int main()
{
    sample s1;
    s1.display();
}
