// program to check  Anagram string ---->
#include<bits/stdc++.h>
using namespace std;
int main()
{
     char a[]="decimal";
     char b[]="medical";
     int i;
     int h[26]={0};
     /* first we create  hash table of size of
     (range of 97 to 122 ) the is 26*/

     for(i=0;a[i]!='\0';i++)
    /* we will   subtract  ASCII value  of string 1 from 97 by
     this we get index of hash table for increment by 1*/

     {
         h[a[i]-97]+=1;
     }
     for(i=0;b[i]!='\0';i++)
    /* check for string 2 by subtracting 97 and decrement
    hash value  and get index */
     {
         h[b[i]-97]-=1;
         if(h[b[i]-97]<0)
// if index  is 0 then  it means all elements are same
// if its less  than 0  then means any of one is not same
         {
             cout<<"not anagram"<<endl;
             break;
         }
     }
     if(b[i]=='\0')
    /* if 2 string gets  null char at end it means
    its anagram*/
        cout<<"anagram"<<endl;
     return 0;
}
