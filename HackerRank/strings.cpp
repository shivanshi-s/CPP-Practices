/*
C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called string. Some of its widely used features are the following:

Declaration:

string a = "abc";
Size:

int len = a.size();
Concatenate two strings:

string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".
Accessing  element:

string s = "abc";
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'

s[0] = 'z';         // s = "zbc"

Sample Input

abcd
ef
Sample Output

4 2
abcdef
ebcd af
 */


 #include <iostream>
 #include <string>
 using namespace std;

 int main() {
 	string a, b; //2 string bana li
     cin>>a;
     cin>>b;         // input le lia
     int len = a.size(); //length of string a
     int len2 = b.size(); // length of string b
     char temp;

     cout<<len<<" "<<len2<<endl;
     cout<<a+b<<endl;

     // tempa = a[0];
     // tempb = b[0];
     // a[0] = tempb;
     // b[0] = tempa;
     //swwwwwaaaaaapppppppppppp
     temp = a[0];
     a[0] = b[0];
     b[0] = temp;


     cout<<a<<" "<<b;
     return 0;
 }
