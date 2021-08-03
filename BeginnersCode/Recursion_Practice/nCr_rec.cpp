#include<iostream>
using namespace std;

int fact(int n)
{
  if(n==0)
    return 1;
  else
    return fact(n-1)*n;
}
int nCr(int n, int r)
{
  int num, den;
  num=fact(n);
  den=fact(r)*fact(n-r);

  return num/den;
}
int main()
{
  int n,r;
  cout<<"enter numerator and denominator : ";
  cin>>n;
  cin>>r;
  cout<<"nCr is : "<<nCr(n,r);
  return 0;
}
