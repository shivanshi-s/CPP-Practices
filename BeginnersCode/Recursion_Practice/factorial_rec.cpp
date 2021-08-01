//factorial of a number using recursion
//n! = 1*2*3*......n
//0! = 1, 1! =1;
/* fact(n) = 1*2*3....*(n-1)*n
 fact(n) = fact(n-1)*n  */

#include<iostream>
using namespace std;

int factorial(int n)
{
  if (n==0)
  {
    return 1;
  }
  else
    return factorial(n-1)*n;
}
int main()
{
  int n;
  cout<<"give the number you want factorial of : ";
  cin>>n;
  cout<<factorial(n);
}
