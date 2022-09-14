#include<bits/stdc++.h>
using namespace std;
class rectangel
{public:
    int length;
    int breadth;
void display();
};
void display(int l,int b)
{
    cout<<"length is "<<l<<endl;
    cout<<"breadth is "<<b<<endl;
}
 int main()
 {
    rectangel R;
    rectangel *p;
p=&R;
    p->length=10;
    p->breadth=20;
    display(p->length,p->breadth);
 }
