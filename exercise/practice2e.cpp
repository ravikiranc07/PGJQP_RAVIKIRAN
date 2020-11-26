#include<iostream>
using namespace std;
struct studentresult
{
    int id[3],res;
    float name[3];
    float phymarks[3],chemmarks[3],mathsmarks[3];
    public : void accept()
    {
        cout<<"enter students name:";
        for(int x=0;x<3;x++)
        {
            cin>>name[3];
        }
        for(int y=0;y<3;y++)
        {
            cin>>id[3];
        }

        for(int i=0;i<3;i++)
        {
            cin>>phymarks[3]>>chemmarks[3]>>mathsmarks[3];
        }
    }
    void display()
    {
        cout<<"the student name is:";
        cout<<name;
        cout<<"\nthe student id is:";
        cout<<id;
        for(int n=0;n<3;n++)
        {
            cout<<phymarks[3]<<chemmarks[3]<<mathsmarks[3];

        }
    }
    void result()
    {
        for( int n=0;n<3;n++)
        {
            res=phymarks[n]+chemmarks[n]+mathsmarks[n];
            cout<<res;
        }
    }

};
int main()
{
    studentresult s1;
    s1.accept();
    s1.display();
    s1.result();

}

