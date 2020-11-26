#include<iostream>
#include<stdio.h>
#include<conio.h>
int s1,s2,s3;
using namespace std;
struct studentresult
{
    float phy_marks,chem_marks,maths_marks;

};
int main()
{

    studentresult studentrecords[] = {
        {75,85,63},
        {45,44,32},
        {94,98,46}


    };


cout<<studentrecords[0].phy_marks+studentrecords[0].chem_marks+studentrecords[0].maths_marks<<endl;
cout<<studentrecords[1].phy_marks+studentrecords[1].chem_marks+studentrecords[1].maths_marks<<endl;

cout<<studentrecords[1].phy_marks+studentrecords[1].chem_marks+studentrecords[2].maths_marks<<endl;



s1=(studentrecords[0].phy_marks+studentrecords[0].chem_marks+studentrecords[0].maths_marks)/3;
if(s1>70)
{
    cout<<"\n Student 1 isResult is:Distinction";
}
else if(s1<70 && s1>45)
{
    cout<<"\n Student 1 Result is:First class";
}
else
{
    cout<<"\n Student 1 result is:Fail";
}
s2=(studentrecords[1].phy_marks+studentrecords[1].chem_marks+studentrecords[1].maths_marks)/3;
if(s2>70)
{
    cout<<"\n Student 2 isResult is:Distinction";
}
else if(s2<70 && s2>45)
{
    cout<<"\n Student 2 Result is:First class";
}
else
{
    cout<<"\n Student 2 result is:Fail";
}
s3=(studentrecords[2].phy_marks+studentrecords[2].chem_marks+studentrecords[2].maths_marks)/3;
if(s3>70)
{
    cout<<"\n Student 3 isResult is:Distinction";
}
else if(s3<70 && s3>45)
{
    cout<<"\n Student 3 Result is:First class";
}
else
{
    cout<<"\n Student 2 result is:Fail";
}



}



