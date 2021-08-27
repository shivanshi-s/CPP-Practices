#include<iostream>
using namespace std;

int main()
{
  int x = 0; int y = 0;
  char route[1000];
  cin.getline(route,1000);

    for(int i=0; route[i]!='\0'; i++)
    {
      switch(route[i])
      {
        case 'N' : y++; break;
        case 'S' : x--; break;
        case 'E' : x++; break;
        case 'W' : y--; break;
        default : cout<<"error!";break;
      }
    }
    cout<<"Final x and y coordinate is "<<x<<","<<y<<endl;

    if(x>=0 && y>=0)
    {
      while( y--){
        cout<<"N";
      }
      while(x--){
        cout<<"E";
      }
    }

}
