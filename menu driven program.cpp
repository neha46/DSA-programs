//Array Menu using C
#include <stdio.h>
#include<stdlib.h>
using namespace std;
class Array
{
private:
 int *A;
 int size;
 int length;
 void swap(int *x,int *y);
public:
    Array()
    {
        size=10;
        length=0;
        A=new int [size];
    }
    Array(int  sz)
    {
        size=sz;
        length=0;
        A=new int[size];
    }
    ~Array()
    {
        delete []A;
    }
    void Display();
    void Append(int x);
    void Insert(int index,int x);
    int Delete(int index);
    int BinarySearch(int key);
   // int RBinSearch(int a[],int l,int h,int key);
    int Get(int index);
    void Set(int index,int x);
    int Max();
    int Min();
    int Sum();
    float Avg();
    void Reverse();
    void Reverse2();
    void InsertSort(int x);
    int isSorted();
    void Rearrange();
     Array* Merge( Array*arr2);
    Array* Union( Array*arr2);
 Array* Difference( Array *arr2);
    };
void Array::Display()
{
 int i;
 printf("\nElements are\n");
 for(i=0;i<length;i++)
 printf("%d ",A[i]);
}
void Array::Append(int x)
{
 if(length<size)
A[length++]=x;

}
void Array::Insert(int index,int x)
{
 int i;
 if(index>=0 && index <=length)
 {
 for(i=length;i>index;i--)
A[i]=A[i-1];
A[index]=x;
length++;

 }
}
int Array::Delete(int index)
{
 int x=0;
 int i;

 if(index>=0 && index<length)
 {
 x=A[index];
 for(i=index;i<length-1;i++)
 A[i]=A[i+1];
 length--;
 return x;
 }

 return 0;
}

int Array::Get(int index)
{
 if(index>=0 && index<length)
 return A[index];
 return -1;
}
void Array:: Set(int index,int x)
{
 if(index>=0 && index<length)
A[index]=x;
}
int Array:: Max()
{
 int max=A[0];
 int i;
 for(i=1;i<length;i++)
 {
 if(A[i]>max)
 max=A[i];
 }
 return max;
}
int Array:: Min()
{
 int min=A[0];
 int i;
 for(i=1;i<length;i++)
 {
 if(A[i]<min)
 min=A[i];
 }
 return min;
}
int Array:: Sum()
{
 int s=0;
 int i;
 for(i=0;i<length;i++)
 s+=A[i];

 return s;
}
float Array:: Avg()
{
 return (float)Sum()/length;
}
void  Array::Reverse()
{
 int *B;
 int i,j;

 B=(int *)malloc(length*sizeof(int));
 for(i=length-1,j=0;i>=0;i--,j++)
 B[j]=A[i];
 for(i=0;i<length;i++)
A[i]=B[i];

}
void Array:: Reverse2()
{
 int i,j;
 for(i=0,j=length-1;i<j;i++,j--)
 {
 swap(&A[i],&A[j]);
 }
}
void  Array::InsertSort(int x)
{
 int i=length-1;
 if(length==size)
 return;
 while(i>=0 && A[i]>x)
 {
 A[i+1]=A[i];
 i--;
 }
 A[i+1]=x;
 length++;

}
int Array :: isSorted()
{
 int i;
 for(i=0;i<length-1;i++)
 {
 if(A[i]>A[i+1])
 return 0;
 }
 return 1;
}
void  Array::Rearrange()
{
 int i,j;
 i=0;
 j=length-1;

 while(i<j)
 {
 while(A[i]<0)i++;
 while(A[j]>=0)j--;
 if(i<j)swap(&A[i],&A[j]);
 }

}
Array* Merge( Array arr2)
{
 int i,j,k;
 i=j=k=0;

Array*arr3= new Array(length+arr2.length);

 while(i<length && j<arr2.length)
 {
 if(A[i]<arr2.A[j])
 arr3->A[k++]=A[i++];
 else
 arr3->A[k++]=arr2.A[j++];
 }
 for(;i<length;i++)
 arr3->A[k++]=A[i];
 for(;j<arr2.length;j++)
 arr3->A[k++]=arr2.A[j];
 arr3->length=length+arr2.length;
 arr3->size=10;

 return arr3;
}
 Array* Union( Array arr2)
{
 int i,j,k;
 i=j=k=0;

Array *arr3= new Array(length+arr2.length);

 while(i<length && j<arr2.length)
 {
 if(A[i]<arr2.A[j])
 arr3->A[k++]=A[i++];
 else if(arr2.A[j]<A[i])
 arr3->A[k++]=arr2.A[j++];
 else
 {
 arr3->A[k++]=A[i++];
 j++;
 }
 }
 for(;i<length;i++)
 arr3->A[k++]=A[i];
 for(;j<arr2.length;j++)
 arr3->A[k++]=arr2.A[j];

 arr3->length=k;
 arr3->size=10;

 return arr3;
}
Array* Intersection( Array arr2)
{
 int i,j,k;
 i=j=k=0;

Array *arr3= new Array(length+arr2.length);

 while(i<length && j<arr2.length)
 {
 if(A[i]<arr2.A[j])
 i++;
 else if(arr2.A[j]<A[i])
 j++;
 else if(A[i]==arr2.A[j])
 {
 arr3->A[k++]=A[i++];
 j++;
 }
 }

 arr3->length=k;
 arr3->size=10;

 return arr3;
}
Array* Difference(Array arr2)
{
 int i,j,k;
 i=j=k=0;
Array *arr3= new Array(length+arr2.length);

 while(i<length && j<arr2.length)
 {
 if(A[i]<arr2.A[j])
 arr3->A[k++]=A[i++];
 else if(arr2.A[j]<A[i])
 j++;
 else
 {
 i++;
 j++;
 }
 }
 for(;i<length;i++)
 arr3->A[k++]=A[i];


 arr3->length=k;
 arr3->size=10;

 return arr3;
}
int main()
{
 struct Array arr1;
 int ch,sz;
 int x,index;

 printf("Enter Size of Array");
 scanf("%d",&sz);
 arr1=new Array(sz);
 arr1.length=0;
 do
 {
 printf("\n\nMenu\n");
 printf("1. Insert\n");
 printf("2. Delete\n");
 printf("3. Search\n");
 printf("4. Sum\n");
 printf("5. Display\n");
 printf("6.Exit\n");

 printf("enter you choice ");
 scanf("%d",&ch);

 switch(ch)
 {
 case 1:
printf("Enter an element and index");
 scanf("%d%d",&x,&index);
 arr1.Insert(index,x);
 break;
 case 2: printf("Enter index ");
 scanf("%d",&index);
 x=arr1.Delete(index);
 printf("Deleted Element is %d\n",x);
 break;
 case 3:printf("Enter element to search ");
 scanf("%d",&x);
 index=arr1.LinearSearch(x);
 printf("Element index %d",index);
 break;
 case 4:printf("Sum is %d\n",arr1.Sum());
 break;
 case 5:arr1.Display();

 }
 }while(ch<6);
 return 0;
}
