#include<bits/stdc++.h>
using namespace std;
class rectangle
{
private:
    int length;
    int bredth;
public:
    rectangle()
    {
        length=bredth=0;
    }
    rectangle(int l, int b);
    int area();
    int perimeter();
    void setlength()
    {int l;
        cout<<"enter length-"<<endl;
        cin>>l;
        length=l;
    }
    void setbredth()// mutators
    {int b;
        cout<<"enter bredth-"<<endl;
        cin>>b;
        bredth=b;
    }
    int getlength()
    {
        return length;
    }
     int getbredth()//acessors
    {
        return bredth;
    }
    ~rectangle()//deconstructor
    {

    }
};
rectangle::rectangle(int l,int b)// parameterized constrictor
{
        length=l;
        bredth=b;
}
 int rectangle::area()//def of area fun outside of class so that we use rectangle to tell type of fun
 {
     return length*bredth;
 }

 int rectangle::perimeter()
 {
     return 2*length*bredth;
 }
 int main()
 {
     rectangle R;
     R.setlength();
     R.setbredth();
     cout<<"length is ="<<R.getlength()<<endl;
     cout<<"bredth is ="<<R.getbredth()<<endl;
     cout<<"Area is "<<R.area()<<endl;;
     cout<<"Perimeter is "<<R.perimeter();
     return 0;
 }
