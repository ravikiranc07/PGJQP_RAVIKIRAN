#include<iostream>
using namespace std;
class Salary
{
    int count=0;
    float amnt[10];
    public : void display()
    {
        cout<<"enter the salaries:";
        for(int i=0;i<10;i++)
        {
            cin>>amnt[i];
        }
        for(int i=0;i<10;i++)
        {
            cout<<amnt[i]<<" ";
        }
    }
    void sort()
    {
        while(count<9)
        {
            float temp;
            if(amnt[count]<amnt[count+1])
            {
                temp=amnt[count];
                amnt[count]=amnt[count+1];
                amnt[count+1]=temp;
                count=0;
                continue;

            }
            count++;
        }
    }
    void output()
    {
        for(int i=0;amnt[i]!='\0';i++)
        {
            cout<<"\n"<<amnt[i]<<" ";
        }
    }

};
int main()
{
    Salary s1;
    s1.display();
    s1.sort();
    s1.output();
}
