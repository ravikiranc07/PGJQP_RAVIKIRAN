#include<iostream>
using namespace std;
class Employee

{
    char firstName,lastName,dateofBirth,dateofJoining,city,phoneNo;
    public : void accept()
    {
        cout<<"enter first name:";

        cin>>firstName;


        cout<<"\nenter last name:";

        cin>>lastName;

        cout<<"\nenter date of birth:";


        cin>>dateofBirth;
        cout<<"\nenter dateofJoining:";


        cin>>dateofJoining;
        cout<<"\nenter the city:";


        cin>>city;
        cout<<"enter phone no:";

        cin>>phoneNo;

    };











     void display()

     {
         cout<<"first name is:"<<firstName;
         cout<<"\nlast name is:"<<lastName;
         cout<<"\ndate of birth:"<<dateofBirth;
         cout<<"\ndate of joining is:"<<dateofJoining;
         cout<<"\ncity is:"<<city;
         cout<<"\nphoneNo is:"<<phoneNo;



     }

};
int main()
{
    Employee e1;
    e1.accept();
    e1.display();
}
