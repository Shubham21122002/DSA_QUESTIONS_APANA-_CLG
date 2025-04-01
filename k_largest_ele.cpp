/*
Given an integer array nums and an integer k, 
return the kth largest element in the array.

Note that it is the kth largest element in the sorted order,
 not the kth distinct element.
*/
#include <iostream>
#include<vector>
#include<queue>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int> pq;
    int n=nums.size();
    for(int i=0;i<n;i++){
        pq.push(nums[i]);
    }
    k-=1;
    while(k>=1){
        cout<<k<<endl;
        pq.pop();k--;
    }
    return pq.top();
}
int main() {
    int size,k;
    cout<<"Enter the size of array :" ;
    cin>>size;
     vector<int>nums(size);
    cout<<"Enter the array element :" ;
    for(int i = 0 ; i < size ; i++) {
    cin>>nums[i];
    }
    cout<<"Enter k value : ";
    cin>>k;
    cout<<"kth largest element is :"<<findKthLargest(nums,k);
    
    return 0;
}


/*
int findKthLargest(vector<int>& nums, int k) {

    sort(nums.begin(), nums.end(), greater<int>());
    return nums[k-1];
        
    }
*/