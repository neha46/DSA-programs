#include<bits/stdc++.h>
using namespace std;
//int x=0;// global-> only one copy is created
int fun1(int n)
{        static int x=0;
    if(n>0)
    {
      x++;
        return fun1(n-1)+x;
    }
}
int main()
{
    int a=3;
    printf("%d",fun1(a));
    return 0;
}
