//binary search can only be in a sorted array
#include<iostream>
using namespace std;
  int main()
  {
    int n, arr[n];
    int start=0,end=n , mid=(start+end)/2,key;
    cout<<"enter the length : ";
    cin>>n;

    for (int i =0; i<n; i++)
    {
      cout<<"enter element ["<<i<<"]";
      cin>>arr[i];
    }
    cout<<"enter key : ";
    cin>>key;
while (start<=end) {
    if(key==arr[mid])
    {
      cout<<"found at "<<mid;
      return 0;
    }
      else if (key<arr[mid])
        end = mid-1;
        else
        start = mid+1;
    }
    cout<<"not found !";
    return 0;
  }
