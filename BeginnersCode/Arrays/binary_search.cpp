#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key)
{
  int start=0,end=n-1,mid=(start+end)/2;
  while(start <= end)
  {
    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid] > key){
      end = mid-1;
    }
    else {
      start = mid+1;
    }
  }
  return -1;
}

int main(){
  int arr[] = {12,14,16,18,20,22,25};
  int n = sizeof(arr)/sizeof(int);

  int key;
  cout<<"enter key : ";
  cin>>key;
  int index = binary_search(arr,n,key);
  if(index!=-1){
    cout<<key<<" is present at "<<index<<endl;
  }
  else {
    cout<<"not found!";
  }
  return 0;
}

//time = O(log n)
//search space should be monotonic
