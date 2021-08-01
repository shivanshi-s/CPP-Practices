/*
fib(n) = {
  0               : n=0
  1               : n=1
fib(n-2)+fib(n-1) : n>1
}
 */

#include<iostream>
using namespace std;

 int fib(int n)
{
   if(n<=1) return n;
    return fib(n-2)+fib(n-1);
}

int F[10];

int mfib(int n)
{
  if(n<=1)
  { F[n]=n;
    return n;
  }
  else
    {
      if(F[n-2]==-1)
        F[n-2]=mfib(n-2);
      if(F[n-1]==-1)
        F[n-1]=mfib(n-1);
      F[n]=F[n-2]+F[n-1];
      return F[n-2]+F[n-1];
    }

}

int main()
{
  int i;
  for(i=0;i<10;i++)
    F[i]=-1;
  int n;
  // cout<<"enter number for fib series : ";
  // cin>>n;
  cout<<mfib(10)<<" ";
  return 0;
}
