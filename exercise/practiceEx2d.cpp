#include<iostream>
using namespace std;
class Supergym
{
    int id1,id2;
    char name1[30],name2[30];
    float age1,age2;

    public : void accept()
    {

        {
            cout<<"\n enter the candidate 1 id:";
            cin>>id1;
            cout<<"\n enter the candidate1 name:";
            cin>>name1;
            cout<<"\n enter the candidate1 age:";
            cin>>age1;
            cout<<"\n enter the candidate 2 id:";
            cin>>id2;
            cout<<"\n enter the candidate2 name:";
            cin>>name2;
            cout<<"\n enter the candidate2 age:";
            cin>>age2;
        }
    }
    void display()
    {
        cout<<"\nthe details of candidates are:";

            cout<<"\n candidate1 id:"<<id1;
            cout<<"\n candidate1 name:"<<name1;
            cout<<"\n candidate1 age:"<<age1;
            cout<<"\n candidate2 id:"<<id2;
            cout<<"\n candidate2 name:"<<name2;
            cout<<"\n candidate2 age:"<<age2;

    }
};
int main()
{
    Supergym s1;
    s1.accept();
    s1.display();
}
