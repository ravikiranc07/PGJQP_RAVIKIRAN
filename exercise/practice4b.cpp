#include<iostream>
using namespace std;

int main()

{

  int month;

  cout<< "Tell me a month number.";

  cout<< "I will tell you the number of days in that month.";

  cin>>month;

if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))

{

  cout<<"Month has 31 days";

}

else if(month==2)

  {

     cout<<"Month has either 28 or 29(if leap year) days."<<endl;

  }

else

{
    cout<<"Month has 30 days";





}

}
