#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n)
{
  for (int i=1; i<n; i++)
  {
      int current = arr[i];
      int prev = i-1;

      while(prev>=0 && arr[prev]>current)
      {
        arr[prev+1] = arr[prev];
        prev = prev - 1;
    }
    arr[prev+1] = current;

  }
}

int main()
{
  int arr[]={-4,5,-2,1,0,20};
  int n = sizeof(arr)/sizeof(int);

  insertion_sort(arr,n);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}
