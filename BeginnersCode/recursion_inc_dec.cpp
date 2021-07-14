#include <iostream>

using namespace std;
int printincdec(int n) {
 if (n == 0){
     return 0;
 }
 cout<<n<<endl;
 printincdec(n-1);
 
 cout<<n<<endl;
}

int main()
{   int n;
    cout<<"enter no : ";
    cin>>n;
    printincdec(n);
    return 0;
}