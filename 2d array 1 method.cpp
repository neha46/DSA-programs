#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][4]={ {11,12,13,14},{22,23,24,25},{33,34,35,36} };// method 1
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    int *b[3];// method 2-> array of pointers
    b[0]=new int[4];
    b[1]=new int[4];
    b[2]=new int[4];
    cout<<" enter elements second array\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        { cout<<"i= "<<i<<"j= "<<j<<"->";
            cin>>b[i][j];
        }
    }
    cout<<"second array is********************\n";
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    int **c;// method 3->by using  double pointer
    c=new int*[3];
    c[0]=new int [4];
    c[1]=new int [4];
    c[2]=new int [4];
 cout<<" enter elements third array\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        { cout<<"i= "<<i<<"j= "<<j<<"->";
            cin>>c[i][j];
        }
    }
    cout<<"Third array is*******************\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
