#include<iostream>
using namespace std;

int main()
{
  char sentence[20];
  char temp = cin.get();

  int length = 0;
  while(temp!='\n'){
    sentence[length++] = temp;
    temp = cin.get();
  }
  sentence[length] = '\0';
  cout<<"length is : "<<length <<endl;
  cout<<sentence << endl;
}
