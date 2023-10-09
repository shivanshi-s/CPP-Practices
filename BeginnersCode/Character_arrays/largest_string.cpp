#include<iostream>
#include<string.h>
using namespace std;

//given - n:strings- we have to find out the largest string out of the given strings

int main()
{
  int n;
  cout<<"enter the number of sentences you want to enter: ";
  cin>>n;

  cin.get(); //to get the \n character

  char sentence[1000];
  char largest[1000];
  int largest_length = 0;

  while (n--)
  {
    cin.getline(sentence,1000);
    int length = strlen(sentence);
      if ( length > largest_length)
      {
        largest_length = length;
        strcpy(largest,sentence);
      }
  }

  cout<<"the largest sentence is : "<<largest<<endl;
  return 0;
}
