#include <iostream>
using namespace std;

class Customer
{

  public:

  int age;

};

int main()

{

  Customer obj1, obj2;

  cout<<"Enter the first customerís age:";

  cin>>obj1.age;

  obj2=obj1;

  cout<<obj1.age<<" is the age of customer1"<<endl;

  cout<<obj2.age<<" is the age of customer2"<<endl;

}
