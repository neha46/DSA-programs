#include<bits/stdc++.h>
using namespace std;
class rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*length*breadth;
    }
};
int main()
{
    rectangle r1,r2;
    cout<<"enter the length and breadth for r1"<<endl;
    cin>>r1.length>>r1.breadth;
    cout<<"enter the length and breadth for r2"<<endl;
    cin>>r2.length>>r2.breadth;
    cout<<"area is "<<r1.area()<<"\n"<<"perimeter is "<<r1.perimeter()<<endl;
     cout<<"area is "<<r2.area()<<"\n"<<"perimeter is "<<r2.perimeter()<<endl;
return 0;
}
