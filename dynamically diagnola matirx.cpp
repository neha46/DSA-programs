#include<bits/stdc++.h>
using namespace std;
struct Matrix
{
    int *a;
    int size;
    int length;
    int n;
};
void Set (struct Matrix *M,int i,int j, int x)
{
    if(i==j)
    {M->a[i]=x;}
}
int get(struct Matrix M,int i,int j)
{
    if(i==j)
        return M.a[i];
    return 0;
}
 void display(struct Matrix M)
 {
     int i=0,j=0;
     for(i=0;i<M.n;i++)
     {
         for(j=0;j<M.n;j++)
         { if(i==j)
                cout<<M.a[i]<<" ";
                else
                    cout<<" 0 ";
         }
         cout<<"\n";
     }
 }
int main()
{
    struct Matrix M;
    M.n=4;//for dimentions
    cout<<"Enter the size of an array you want"<<endl;
    cin>>M.size;
    M.a=new int[M.size];
    M.length=0;
    Set(&M,0,0,10);
    Set(&M,1,1,20);
    Set(&M,2,2,30);
    Set(&M,3,3,40);
M.length=M.n;
    display(M);
    return 0;
}
