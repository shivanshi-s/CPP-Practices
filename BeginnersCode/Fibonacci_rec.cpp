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
   if(n>1)
    return n;
  else
    fib(n-2)+fib(n-1);
 }

int main()
{
  int n;
  cout<<"enter number for fib series : ";
  cin>>n;
  cout<<fib(n)<<" ";
}
