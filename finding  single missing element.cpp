//  single missing element in sorted array
#include<bits/stdc++.h>
using namespace std;
int main()
{
int A[]={6,7,8,9,10,12,13,14,15,16};
int low=6;
int high=17;
int diff;
diff=low-0;
  for(int i=0;i<10;i++)
  {
      if(A[i]-i!=diff)
        {cout<<i+diff<<" ";
        break;}
  }
return 0;
}
