//   PROBLEM : 
 // remove-duplicates-from-sorted-array

// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

// Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

// The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.

// Example: 
// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).

#include<iostream>
using namespace std;
int main() {
    int arr[]={0,0,1,1,1,2,2,3,3,4};
    int size=10;
    int x=0;
    for(int i=1;i<size;i++){
        if(arr[x]!=arr[i]){  //means you are on unique elem on array
            x=x+1;
            arr[x]=arr[i];
        }
    }
    cout<<"uniqe elements are : "<<x+1<<endl;
}