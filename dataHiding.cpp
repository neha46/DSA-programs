#include<ibits/stdc++.h>
using namespace std;
class rectangle
{
private:
    int length;
    int bredth;
public:
    int area()
    {
        return length*bredth;
    }
    int parameter()
    {
        return 2*length*bredth;
    }
void setlength(int l)
{
    if(l>=0)
        length=l;
    else
        length=0;
}
void setbredth(int b)
{
    if(b>=0)
        bredth=b;
    else
        bredth=0;
}
int getlength()
{
     return length;
}
int getbredth()
{
    return bredth;
}
};
int main()
{
    rectangle r;
    r.setlength(10);
    r.setbredth(20);
    cout<<"Area is "<<r.area()<<endl;
    cout<<"Parameter is "<<r.parameter();
}
