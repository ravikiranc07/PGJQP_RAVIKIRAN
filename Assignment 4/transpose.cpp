#include<iostream>
using namespace std;
class Transpose
{
    int i,j;
    int matx[10][10],tmatx[10][10],row,col;
    public : void display()
    {
        cout<<"\nenter the number of rows:";
        cin>>row;
        cout<<"\nenter the number of columns:";
        cin>>col;
        cout<<"\nenter the elements of matrix:";
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cin>>matx[i][j];
            }
        }

        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                tmatx[j][i]=matx[i][j];;
            }
        }
        cout<<"\nthe transpose matrix is:\n";
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cout<<tmatx[i][j]<<" ";
                if(j==row-1)
                    cout<<endl;
            }
        }

    }

};
int main()
{
    Transpose t1;
    t1.display();
}
