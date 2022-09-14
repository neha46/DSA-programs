// class for  lower triangular matrix by following column major ->
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
    int get(int i, int j);//fun for getting values
    void display();//fun for printing values
    ~Matrix()// destructor for deallocate memory
    {delete []A;}
};
//fun for setting values->
 void Matrix::set(int i, int j, int x)
{
    if(i>=j)
        A[n*(j-1)+(j-2)*(j-1)/2+i-j]=x;
        //i*(i-1)/2+j-1] will store data by column major
}
//fun for getting values-->
 int Matrix::get(int i, int j)
{
    if(i>=j)
        return  A[n*(j-1)+(j-2)*(j-1)/2+i-j];
        //i*(i-1)/2+j-1] will return data by column major
    else
        return 0;
}
//fun for printing values-->
 void Matrix::display()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
                cout<< A[n*(j-1)+(j-2)*(j-1)/2+i-j]<<" ";
            //i*(i-1)/2+j-1] will print  data by column major
            else
                cout<<" 0 ";
        }
        cout<<"\n";
    }
}
int main()
{int n;
    cout<<"Enter dimention"<<endl;
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





