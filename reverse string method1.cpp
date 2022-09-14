// program to reverse string by using two string-method 1.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[]="language";//1 string
    int i,j;
    for(i=0;s1[i]!='\0';i++);// by this we get string length
     char s2[i];// 2 string
    i-=1;// for  ignoring null character
    for(j=0;i>=0;i--,j++)
    /* storing elements from string 1->i( from last) to string 2->j(first)
    until our i is less then or 0 and j as (null char-1)*/
        s2[j]=s1[i];
    }
    s2[j]='\0';//  adding null char for making string
cout<<"reversed string is--->"<<s2<<endl;
}
