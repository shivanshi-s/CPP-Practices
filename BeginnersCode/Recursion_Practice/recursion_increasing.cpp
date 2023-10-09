
#include <iostream>

using namespace std;
int printinc(int n) {
 if (n==0) {
     return n;
 }
 printinc(n-1);
 cout<<n<<endl;
}

int main()
{   int n;
    cout<<"enter no : ";
    cin>>n;
    printinc(n);
    return 0;
}