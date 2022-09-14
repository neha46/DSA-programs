#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][5],k,s[1];
    k=5/2;
    a[0][k]=1;
    for(int i=1;i<3;i++)
    {  s[0]=a[0]+a[i];
        for(int j=0;i<5;j++)
            {
                if(a[j]>0)
                {
                    a[j+i]=s[0];
                    a[j+i+1]=s[0];
                }
                if(a[j]%2==0)
                    a[j]=0;
            }
        }
        for(int i=;i<3;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<a[i][j]<<"  ";
            }
            cout<"\n";
        }
        return 0;
}
