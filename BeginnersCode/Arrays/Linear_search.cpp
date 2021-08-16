//searching algo to find the index of element in an array

#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int key){
  fot (int i=0; i<n; i++)
  {
    if(arr[i]==key)
    {
      return 1;
    }
  }
  return -1;
}
int main()
{
  int arr[]={10,15,13,46,35,24};
  int n = sizeof(arr)/sizeof(int);
  int key;
  cin>>key;

  int index = linear_search(arr,n,key);
  if(index!=1){
    cout<<"not found "
  }
  else {
    cout<<"found at "<<key<<endl;
  }
  return 0;
}

//O(n) time.
