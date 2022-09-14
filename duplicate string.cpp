// program to get duplicate element  in string---->
#include<bits/stdc++.h>
using namespace std;
int main()
{
     char a[]="anisha";
     int i,j;
     int h[26]={0};// hash table

     for(i=0;a[i]!='\0';i++)
     {
         h[a[i]-97]++;// did for ASCII  value & for getting index for hash table
     }

     for(i=0;i<26;i++)
     {
         if(h[i]>1)// if greater then 1 it means any of one  is duplicate
            printf("%c  comes  %d times\n",i+97,h[i]);
     }
     return 0;
}
