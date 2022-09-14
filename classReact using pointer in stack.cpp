#include<bits/stdc++.h>
using namespace std;
class Rect
{
public:
    int length,bredth;
    int area()
    {
        return length*bredth;
    }
    int parameter()
    {
        return 2*length*bredth;

    }
};
int main()
{
    Rect r;
    Rect *p;
    p=&r;
    p->length=10;
    p->bredth=20;
    cout<<"area is "<<p->area()<<"\n"<<"paraeter is "<<p->parameter()<<endl;
}

