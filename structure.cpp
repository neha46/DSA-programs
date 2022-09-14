#include<bits/stdc++.h>
using namespace std;//in structure everything is public
struct rect
{
    int length;
    int bredth;
};
void initialize(struct rect *r,int l,int b)
{
   r->length=l;
   r->bredth=b;
}
int area(struct rect r)
{
    return r.length*r.bredth;
}
int perimeter(struct rect r)
{
    return 2*r.length*r.bredth;
}
int main()
{
    struct rect r={0,0};
    int l,b;
    cout<<"enter lenth and breadth"<<endl;
    cin>>l>>b;
    initialize(&r,l,b);
    int a=area(r);
    int p=perimeter(r);
    cout<<"area is "<<a<<"\n"<<"perimeter is "<<p;
}
