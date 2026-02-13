// Question : Two Sum

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(){
    int arr[]= {5,2,9,3,8,6,1,7};
   int target = 15;
   int n=8;
   int sum=0;
   vector<int>ans;
   for(int i=0;i<n-1;i++){
    for(int j=0;j<n;j++){
       sum=arr[i]+arr[j];
       if(sum==target){
        ans.push_back(i);
        ans.push_back(j);
        return ans;
       } 
    }
   }
}
int main() {
  cout<<"number is : "<<endl;
  vector<int>store=twoSum();
  for(int i=0;i<store.size();i++){
    cout<<store[i]<<" ";
  }
}