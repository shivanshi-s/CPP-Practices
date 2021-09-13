/*
Given an integer array nums, find the contiguous subarray (containing at least one number)
 which has the largest sum and return its sum.

A subarray is a contiguous part of an array.



Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
 */
#include<iostream>
using namespace std;
// finding the maximum subarray using kadanes algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0;
        int largest=nums[0];

        for(int i=0;i<nums.size();i++)
        {
            cs= cs+nums[i];

            largest = max(largest,cs);
               if(cs<0){
                cs=0;
            }
        }
        return largest;
    }
};
// int max_subarray(int arr[],int n){
//  int cs =0;
//  int largest = 0;
//
//  for(int i=0;i<n;i++)
//  {
//    cs = cs+arr[i];
//    if(cs<0){
//      cs=0;
//    }
//    largest = max(largest,cs);
//  }
//  return largest;
// }
// int main(){
//   int arr[]={-2,3,5-7,4,2,1,3};
//   int n= sizeof(arr)/sizeof(int);
//   return 0;
// }

//-2,3,5,-7,1,6
//maintain a running sum and max sum and current sum
//O(n) time, no extra space = O(1)
