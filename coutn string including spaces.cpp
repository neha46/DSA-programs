// this program is for to count when u have many of spaces in string.
#include<bits/stdc++.h>
using namespace std;
int main()
{ char a[50]=" how  are you";
int i,word=0,ch=0;
for(i=0;a[i]!='\0';i++)
{
    if(a[i]==' ')// if there is any space
    {
        if(ch!=0)
/* along with space checking, if ch flag is  not 0*/
        {word++;}// then it means one word is counted
        ch=0;
/* we will remark ch flag as 0 again  for checking next
space and counting next word*/

        }
        else
        {
        ch++;
// if no pace is found then increment flag ch
    }
}
if(ch!=0)
/* this condition is for checking space at end of string
before the null pointer, it specify that if last flag value of ch is 0
then  it means space is present at last ,if  flag value is >0 then it means
no space at  last*/
    word++;
cout<<"total words are-->"<<word;
return 0;
}

