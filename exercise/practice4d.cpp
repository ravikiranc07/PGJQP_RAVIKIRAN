#include<iostream>
using namespace std;
class Cricket
{
    int score1,score2,score3;
    int res;
    public : void display()
    {
        cout<<"\n Enter the score scored in match1:";
        cin>>score1;
        cout<<"\n Enter the score scored in match2:";
        cin>>score2;
        cout<<"\n Enter the score scored in match3:";
        cin>>score3;
        res=(score1+score2+score3)/3;
        cout<<"\nThe avg of 3 matches is:"<<res;

    }
};
int main()
{
    Cricket c1;
    c1.display();
}
