#include<bits/stdc++.h>
using namespace std;
int main()
{ int i,j;
int x,y;
x=y=1;
int  a[4][4]={{44,1,1,1},{4,1,8,1},{5,1,1,1},{6,1,5,0}};
for( int j=0;j<4;j++)
{
    if(a[0][j]==0)
        x=0;
}
for( int i=0;i<4;i++)
{
    if(a[i][0]==0)
        y=0;

}
for(int i=1;i<4;i++)
{
    for(j=1;j<4;j++)
    {
        if(a[i][j]==0)
        {
            a[i][0]=0;
            a[0][j]=0;
        }
    }
}
for(int j=1;j<4;j++)
{
    if(a[0][j]==0)
    {
        for(int i=1;i<4;i++)
            a[i][j]=0;
    }
}

for(int i=1;i<4;i++)
{
    if(a[i][0]==0)
    {
        for(int j=1;j<4;j++)
            a[i][j]=0;
    }
}
if(x==0)
{
    for(int j=0;j<4;j++)
    {
        a[0][j]=0;
    }
}
if(y==0)
{
    for(int i=0;i<4;i++)
    {
        a[i][0]=0;
    }
}
cout<<"matrix  is ---->"<<endl;
     for(int i=0;i<4;i++)
    {
        for( int j=0;j<4;j++)
        {
            cout<<"["<<a[i][j]<<" , ";
        }
        cout<<"\n";
    }
    return 0;
}
