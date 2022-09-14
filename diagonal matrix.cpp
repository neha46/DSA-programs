// class for Diagonal Matrix ---------->
#include<bits/stdc++.h>
using namespace std;
class Matrix
{private:
    int *A;
    int n;
public:
    Matrix(int n)// parameterized constructor
    {
        this->n=n;
        A=new int[n];
    }
    void set(int i,int j, int x);//fun for setting values
    int get(int i, int j);// fun for getting values
    void display();// fun for display matrix
    ~Matrix()// destructor for deallocate memory
    {
        delete []A;
    }
};
//fun for setting values
 void Matrix::set(int i, int j, int x)
{if(i==j)
        A[i]=x;
}
//fun for getting values
 int Matrix::get(int i, int j)
{if(i==j)
        return A[i];}
// fun  for display   diagonal matrix
 void Matrix::display()
{int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                cout<<A[i]<<" ";
            else
                cout<<" 0 ";
        }
        cout<<"\n";
    }
}
int main()
{int n;// for dimention input by user
    cout<<"Enter dimentions"<<endl;
    cin>>n;
       Matrix M(n);
    int i,j,x;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {cin>>x;
            M.set(i,j,x);
            }
        }
    }
    cout<<"\n";
    M.display(); return 0;}






