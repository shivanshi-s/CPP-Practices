#include<iostream>
using namespace std;
//count alphabets, digits or spaces

int main()
{
  char ch;
  ch = cin.get();

  //counts
  int digit = 0;
  int alpha = 0;
  int space = 0;

  while(ch!='\n')
  {
    if(ch>= '0' && ch<='9')
    {
      digit++;
    }
    else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
      alpha++;
    }
    else if(ch==' '|| ch=='\t'){
      space++;
    }
    ch = cin.get();
  }
    cout<<"digits : "<<digit<<endl;
    cout<<"alphabets : "<<alpha<<endl;
    cout<<"spaces : "<<space<<endl;

 return 0;
}
