// class for lower triangular matrix by row major method-->
#include<bits/stdc++.h>
using namespace std;
class Matrix
{
    private:
    int *A;
    int n;
public:
    Matrix(int n)// parameterized constructor
    {
        this->n=n;
        A=new int[n];
    }
    void set(int i,int j, int x);//fun for setting values
    int get(int i, int j);//fun for getting values
    void display();//fun for printing values
    ~Matrix()// destructor for deallocate memory
    {delete []A;}
};
//fun for setting values
 void Matrix::set(int i, int j, int x)
{
    if(i>=j)
        A[i*(i-1)/2+j-1]=x;
    //[i*(i-1)/2+j-1] will store data by row major
}
//fun for getting values
 int Matrix::get(int i, int j)
{
    if(i>=j)
        return  A[i*(i-1)/2+j-1];
        // return data by row major
    else
        return 0;
}
//fun for printing values
 void Matrix::display()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
                cout<<A[i*(i-1)/2+j-1]<<" ";
                //[i*(i-1)/2+j-1] will print data by row major
            else
                cout<<" 0 ";
        }
        cout<<"\n";
    }
}
int main()
{int n;
    cout<<"Enter dimentions"<<endl;
    cin>>n;
       Matrix M(n);
    int i,j,x;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {cin>>x;
        M.set(i,j,x);
        }
    }
    cout<<"\n";
    M.display();
return 0;
}


