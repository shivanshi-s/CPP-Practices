#include<iostream>
using namespace std;

void PrintPairs(int arr[],int n)
{
  for(int i=0;i<n; i++)
  {
    int x = arr[i];

    for(int j=i+1; j<n; j++)
    {
      int y = arr[j];

      cout<<x<<" , "<<y<<endl;
    }
    cout<<endl;
  }
}
int main()
{
  int arr[]={10,20,30,50,40,70};
  int n=sizeof(arr)/sizeof(int);
  PrintPairs(arr,n);

  //print all elements ogf the array :
  // for(int x : arr) {
  //   cout<<x<<endl;
  // } // x is taking the value one by one from arr and printing it
}
