/*program to count vowels as well as  consonants.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{ char a[20]="NeHa MiShRa";// vowels-4 &cont=6
int i,c_vowel=0,c_const=0;
for(i=0;a[i]!='\0';i++)
{
   if((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
      ||(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'))
   // check for all(a,e,i,o,u) for small and capital both
   {
         c_vowel++;
   }
   else if((a[i]>=65&&a[i]<=90)||(a[i]<=97&&a[i]<=122))
    // if there is no vowel then remaining will be consonant.
   {
   c_const++;

   }
}
cout<<"vowels are"<<c_vowel<<"\n"<<"consonant are->"<<c_const;
return 0;
}

