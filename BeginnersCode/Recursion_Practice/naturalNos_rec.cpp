//write the sum of 'n' natural numbers
//direct formula : n(n+1)/2;



#include<iostream>
using namespace std;
int sum(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else
    return sum(n-1)+n;
}

int main()
{
  int n;
  cout<<"enter the value of the natural numbers : ";
  cin>>n;
  cout<<"natural numbers : "<<sum(n);
}
