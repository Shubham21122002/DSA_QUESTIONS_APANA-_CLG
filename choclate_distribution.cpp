/*
Given an array arr[] of n integers where 
arr[i] represents the number of chocolates in ith packet. 
Each packet can have a variable number of chocolates. 
There are m students, the task is to distribute chocolate packets such that: 

  -->Each student gets exactly one packet.
  -->The difference between the maximum and minimum number of chocolates in the
     packets given to the students is minimized.
*/
#include <iostream>
#include<vector>
#include <algorithm>  // Required for sort()

using namespace std;
int  distribute (vector<int>&nums, int size,int students){

    if (students == 0 || size == 0) return 0;
    if (students > size) return -1;

    sort(nums.begin(), nums.end());  // Sort in ascending order

    int min_diff = INT16_MAX;

    for(int i = 0 ; i + students-1<size ; i++){
        int window_diff = nums[i + students - 1] - nums[i];
        min_diff = min(min_diff, window_diff);

    }
    return min_diff;
}
int main() {
    
    int size,students;
    cout<<"Enter the size of array :" ;
    cin>>size;
    vector<int>nums(size);    
    cout<<"Enter the array element :" ;
    for(int i = 0 ; i < size ; i++) {
        cin>>nums[i];
    }
    cout<<"Enter the number of students :";
    cin>>students;
    cout<<distribute(nums,size,students);
    return 0;
}