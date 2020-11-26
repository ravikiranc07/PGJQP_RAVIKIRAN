#include<iostream>
#include<string.h>
using namespace std;
class Dealer
{
private:
    char mobileNo[11];
    char dealerName[25];
    char dealerAddress[51];
    char dealerCity[25];
    char phoneNo[11];
static int CompanyID;
public:

    void showID()
    {


        cout<<"the dealer name is:"<<dealerName;
        cout<<"the company id is"<<CompanyID;



    }
    void get()
    {

    }
    void print()
    {

    }
};int Dealer :: CompanyID=6519;
int main()
{
    Dealer d1;
    d1.showID();
}
