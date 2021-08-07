#include<iostream>
using namespace std;

//expectation- index se end tak sab print kar de
//faith- index+1 se end tak karna janta hai
int arraydisplay(int arr[],int index)
{
    if(index == 5){ //need to fix this 
        return 0;
    }
  cout<<arr[index]<<" ";
  arraydisplay(arr,index+1);
}

int main()
{
  int index;
  int arr[index];
  cout<<"enter index no : ";
  cin>>index;
  cout<<"enter array nos : ";
  for(int i=0;i<index;i++){
    cin>>arr[i];
  }
  arraydisplay(arr,0);
  return 0;
}
