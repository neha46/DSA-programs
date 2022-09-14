/* string is set of characters having null character
at end. null character is also called string delimiter
or string  terminator */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char A[10]={'N','E','H','A','M','I','S','R','A','\0'};  // '\0' shows that  its a string
    char B[20];// create another array for input string from user
    //'\0' is also consume some space
    // second way to declare ->char A[10]="NEHAMISRA";
    // third way to declare ->char A[]="NEHAMISHRA";
    for(int i=0;A[i]!='\0';i++)// for printing string elements
    {
        cout<<A[i]<< " ";
    }
    cout<<endl;
    cout<<"Enter pls another string---------->"<<endl;
    scanf("%s",B);// input 2 string
    /* but the problem is this if we enter
    an string that contains more then one word including spaces
    then  we  get only one word because scanf takes only word, it can not read
    multiple words so that, it will skip remaining word, */
    cout<<" for single word------>"<<endl;
    printf("%s\n",B);
    // for reading multiple words we will use gets() in c and getline() in c++.
    /* if you are using getline(cin,var) then create  string using string  data type
     and include string header file , this is in c++ and or if you are using fgets() then
    create string as char array and also include string header file, this is in clang*/
    return 0;
}

