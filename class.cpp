#include<bits/stdc++.h>
using namespace std;//in class everything is private, in this we will have to make them public
class rect
{
    int length;
    int bredth;
    public:
void initialize(int l,int b)
{
   length=l;
   bredth=b;
}
int area()
{
    return length*bredth;
}
int perimeter()
{
    return 2*length*bredth;
}
};
int main()
{
    struct rect r;
    int l,b;
    cout<<"enter lenth and breadth"<<endl;
    cin>>l>>b;
    r.initialize(l,b);
    int a=r.area();
    int p=r.perimeter();
    cout<<"area is "<<a<<"\n"<<"perimeter is "<<p;
}

