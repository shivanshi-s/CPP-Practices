#include<iostream>
using namespace std;

int bubble_sort(int a[],int n)
{
  int flag=0;
  for (int times=0; times < n-1; times++)
 {
   for (int j=0; j<n-1-times; j++)
   {
     if(a[j] > a[j+1])
      swap(a[j],a[j+1]);
      flag = 1;
   }
 }
 return flag;
}

int main()
{
  int arr[]= {1,2,3,4,5};
  int n= sizeof(arr)/sizeof(int);

  int swapp = bubble_sort(arr,n);

  for(int i=0; i<n;i++)
  {
    cout<<arr[i]<<" ";
    cout<<endl;
  }
  if (swapp == 0)
  {
    cout<<"It was sorted !";
  } else cout<<"Sorting completed...";

  return 0;
}
