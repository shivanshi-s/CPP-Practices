#include<iostream>
using namespace std;

int subarrays(int arr[],int n)
{
  for (int i=0; i<n; i++)
  {
    for (int j=i; j<n; j++){
        for(int k=i ; k<=j; k++){
          cout<<arr[k]<<",";
        }
      cout<<endl;
    }
  }
}

int main(){
  int arr[]={12,15,64,21,5,6,13};
  int n = sizeof(arr)/sizeof(int);
  subarrays(arr,n);
}

//time - O(n^3)
