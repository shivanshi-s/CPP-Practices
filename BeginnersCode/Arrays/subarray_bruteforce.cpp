#include<iostream>
using namespace std;

int printsubarrays(int arr[],int n)
//brute force approach
{
    int largest_sum = 0;
    
  for (int i=0; i<n; i++)
  {
    for (int j=i; j<n; j++){

        int subarraySum = 0;

        for(int k=i ; k<=j; k++)
        {
          subarraySum +=arr[k];
        }
      //put a check if subarraySum > largest_sum
      largest_sum = max(largest_sum,subarraySum);
    }
  }
  return largest_sum;
}

int main()
{
  int arr[]={10,20,-30,40,-50,60};
  int n= sizeof(arr)/sizeof(int);

  cout<<printsubarrays(arr,n)<<endl;

  return 0;
}
