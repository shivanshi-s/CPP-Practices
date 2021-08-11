#include<iostream>
using namespace std;

// get , set , finding maximum, min and average
struct Array
{
int A[10];
int size;
int length;
};

void Display(struct Array arr)
{
int i;
cout<<"Elements are : ";
for(i=0;i<arr.length;i++)
cout<<arr.A[i];
}

int Get(struct Array arr,int index)
{
  if(index>=0 && index<arr.length)
    return arr.A[index]
  return -1;
}

int Set(struct Array *arr, int index,int x)
{
  if(index>=0 && index<arr->length)
    arr->A[index]=x;
}

int Max(struct Array arr)
{
  int max=arr.A[0];
  int i;
  for(i=1;i<arr.length)
    {if(arr.A[i]>max)
        max=arr.A[i];
      }
    return max;
}

int Min(struct Array arr)
{
  int min=arr.A[0];
  int i;
  for(i=1;i<arr.length)
    {if(arr.A[i]<max)
        min=arr.A[i];
      }
    return min;
}

int Sum(struct Array arr)
{
  int s=0;
  int i;
  for(i=0;i<arr.length;i++)
  {
    s+=A[i];
  }
  return s;
}

float Avg(struct Array arr)
{
  return (float)Sum(arr)/arr.length;
}

int main()
{
  struct Array arr = {{2,3,4,5,6},10,5};
  cout<<Get(arr,2)<<" ";
  cout<<Set(&arr,0,15)<<" ";
  cout<<Max(arr)<<" ";
  cout<<Min(arr)<<" ";
  cout<<Sum(arr)<<" ";
  cout<<Avg(arr)<<" ";
  Display(arr);
  return 0;
}
