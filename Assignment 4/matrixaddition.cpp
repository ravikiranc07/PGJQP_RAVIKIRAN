#include<iostream>
using namespace std;
class Matrix
{
    int i,j;
    int row,col,m1[10][10],m2[10][10],sum[10][10];
    public : void display()
    {
        cout<<"enter the number of rows:";
        cin>>row;
        cout<<"\nenter the number of columns:";
        cin>>col;
        cout<<"\n enter the elements of first matrix:";
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cin>>m1[i][j];
            }
        }
        cout<<"\n enter the elements of second matrix:";
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cin>>m2[i][j];
            }
        }
        cout<<"\noutput is:";
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                sum[i][j]=m1[i][j]+m2[i][j];
                cout<<sum[i][j]<<" ";
            }
        }
    }
};
int main()
{
    Matrix m1;
    m1.display();
}
