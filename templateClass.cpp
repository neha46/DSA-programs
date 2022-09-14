#include<bits/stdc++.h>
using namespace std;
template<class T>
class arithmatic
{
private :
     T a1;
    T b1;
public:
    T add();
    T sub();
    T mul();
arithamtic()
{
    a1=0;
    b1=0;
}
    void seta1()
    {
        T a;
        cout<<"Enter 1 number"<<endl;
        cin>>a;
        a1=a;
    }
      void setb1()
    {T b;
        cout<<"Enter 2 number"<<endl;
        cin>>b;
        b1=b;
    }
    T geta()
    {
        return a1;
    }
      T getb()
    {
        return b1;
    }
};
template<class T>
T arithmatic<T>::add()
{
    T c;
    c=a1+b1;
    return c;
}
template<class T>
  T arithmatic<T>::sub()
{
    T c;
    c=a1-b1;
    if(a1>b1)
        return c;
    else
        return c*(-1);

}
template<class T>
T arithmatic<T>::mul()
{
    T c;
    c=a1*b1;
    return c;
}
int main()
{   arithmatic<int> r;
   r.seta1();
   r.setb1();
    cout<<"Addition is "<<r.add()<<endl;
    cout<<"subtraction is "<<r.sub()<<endl;
    cout<<"multiplication  is "<<r.mul()<<endl;\
return 0;
}
