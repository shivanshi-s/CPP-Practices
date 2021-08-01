/*
pow(m,n) = (m*m*m....*n-1 times)*m
in recursion,
pow(m,n) = (m,(n-1))*m; when n>0;
 */


#include<iostream>
using namespace std;

int power(int m, int n)
{
  if (n==0)
    return 1;
  else
    return power(m,n-1)*m;
}

int main()
{
  cout<<"enter number and power :";
  int n, m;
  cin>>m>>n;
  cout<<power(m,n);
}
