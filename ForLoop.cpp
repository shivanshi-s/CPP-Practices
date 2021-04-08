//---HACKERRANK-----
/*PROBLEM STATEMENT : 
You will be given two positive integers, and ( ), separated by a newline.
Output Format
For each integer in the interval :
If , then print the English representation of it in lowercase. That is "one" for , "two" for ,
and so on.
Else if and it is an even numeber, then print "even".
Else if and it is an odd number, then print "odd".
*/
//----SOLUTION----
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    string one[] = { "", "one ", "two ", "three ", "four ", 
                 "five ", "six ", "seven ", "eight ", 
                 "nine "
               }; 
   for(int i=a;i<=b;i++)
   {
       if(i<=9)
       {
            cout<<one[i]<<endl;
        }
        else if(i%2==0){
            cout<<"even"<<endl;
        }
        else 
        {cout<<"odd"<<endl;}
   }
}
