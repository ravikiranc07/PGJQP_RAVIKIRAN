#include<iostream>
using namespace std;
class Booking
{
    int flightno,date;
    string dest;
    public : void accept()
    {

        cout<<"enter the flight number:";
        cin>>flightno;
        cout<<"\nenter the destination:";
        cin>>dest;
        cout<<"\nenter the date:";
        cin>>date;

    }
    int tickets;
    void display()
    {
        cout<<"\nenter the number of seats available:";
        cin>>tickets;

        if(tickets>0)
        {
            cout<<"\nTicket is confirmed";
            cout<<"\nflight no:"<<flightno;
            cout<<"\ndestinatiom:"<<dest;
            cout<<"\ndate :"<<date;
        }
        else
        {
            cout<<"tickets are not available";
        }
    }

};
int main()
{
    Booking b1;
    b1.accept();
    b1.display();
}
