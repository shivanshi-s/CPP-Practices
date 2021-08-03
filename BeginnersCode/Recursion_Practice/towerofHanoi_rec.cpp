#include<iostream>
using namespace std;

int toh(int n, int A, int B, int C)
{
  if(n>0) // = no of rings
  {
    toh(n-1,A,C,B);
    cout<<"From "<<A<<"to "<<C<<endl;
    toh(n-1,B,A,C);
  }

}

int main()
{
  toh(4,1,2,3);
  cout<<"tower of hanoi shift completed! ";
  return 0;

}
