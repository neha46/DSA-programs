#include<bits/stdc++.h>
using namespace std;
int main()
{ int i=0;
int max,min;
    int a[10]={1,5,20,9,10,23,4,-1,99,10};
    max=min=a[0];
    while(i+1<10)
    {
            if(a[i+1]>max&&a[i+1]>min)
            {max=a[i];
            i++;}
            else if(a[i+1]<max&& a[i+1]<min)
                {min=a[i+1];
                i++;}
            else
                i++;

    }
    cout<<"Max is "<<max<<"\n"<<"Min is "<<min<<endl;
    return 0;
}
