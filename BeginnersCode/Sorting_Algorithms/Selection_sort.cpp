#include<iostream>
using namespace std;

void selection_sort(int A[], int n)
{   int j,k;
  for( int i=0; i< n-1; i++)
 {
   for(j=k=i; j<n ; j++){
     if ( A[j] < A[k])
        k = j;
   }
   swap(A[i],A[k]);
 }
}

int main() {
  int arr[] = { 2, 5, -3, 6, 12, 14};
  int n = sizeof(arr)/sizeof(n);

  //output of the array
  selection_sort(arr,n);

  for (auto x : arr)
  {
    cout<<x<<" ";
  }
  cout<<endl;
  cout<<"-- SELECTION SORT COMPLETED --";
  return 0;
}
