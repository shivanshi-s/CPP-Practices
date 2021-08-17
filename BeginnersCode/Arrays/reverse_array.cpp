#include<iostream>
using namespace std;

int reverse_arr(int arr[],int n)
{
  int start =0;
  int end = n-1;

  while(start<end){
    swap(arr[start],arr[end]);
    start+=1;
    end-=1;
  }
}
int main(){
  int arr[]={12,14,35,21,56,75};
  int n=sizeof(arr)/sizeof(int);

  cout<<"before rev : ";
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  reverse_arr(arr,n);

  cout<<" After rev : ";
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
}
