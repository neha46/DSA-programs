// this program is for only when u  do  not  have space at beg and last
#include<bits/stdc++.h>
using namespace std;
int main()
{ char a[50]="how      are    you";
int i,word=1;
for(i=0;a[i]!='\0';i++)
{
     {if(a[i]==' '&&a[i-1]!=' ')
        word++;}
}
cout<<"total words are-->"<<word;
return 0;
}
