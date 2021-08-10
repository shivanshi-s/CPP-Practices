#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array
{
  int *A;
  int size;
  int length; //no of elements inside the Array
};
void Display(struct Array arr)
{
  int i;
  cout<<"Elements are : ";
  for(i=0;i<arr.length;i++)
    cout<<" "<<arr.A[i];

}

int main()
{
  struct Array arr;
  int n,i;
  cout<<"enter size of an array : ";
  cin>>arr.size;

  arr.A = new int[arr.size];
  arr.length =0;
  //^ array in heap === dynamically
  cout<<"enter the length of numbers : ";
  cin>>n;

  cout<<"enter the elements: ";
  for(i=0;i<n;i++)
    cin>>arr.A[i];
  arr.length = n;

  Display(arr);
}
