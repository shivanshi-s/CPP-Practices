#include<iostream>
using namespace std;

int fun(int n)
{
  if(n>0)
  {
    cout<<n<<endl;
    fun(n-1);
    fun(n-1);
  }
}
int main(){
  fun(3);
}
