#include<iostream>
using namespace std;

int first_occurance(int arr[], int n,int key,int length)
{
  if(n == length){
    return -1;
  }
  if(arr[n]==key){
    return n;
  }else {
    int fiisa = first_occurance(arr,n+1,key,length);
  }
}
int main(){
  int arr[]={2,3,5,31,6,2,6};
  int n= sizeof(arr)/sizeof(int);
  int length=sizeof(arr);
  cout<<"size of arr is "<<length<<endl;
  int key = 5;

  cout<<first_occurance(arr,0,key,length);
}
