#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(){
    int arr[]= {2,7,11,15};
   int target = 9;
   int n=4;
   int i=0;
   int j=n-1;
   int sum=0;
   vector<int>ans;
   while(i<j){
    sum=arr[i]+arr[j];
    if(sum<target)
    i++;
    else if(sum>target)
    j--;
    else
    {
        ans.push_back(i+1);
        ans.push_back(j+1);
        return ans;
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
