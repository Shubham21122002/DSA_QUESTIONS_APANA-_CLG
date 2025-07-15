//Given an integer array nums, find the subarray with the largest sum, and return its sum.
/*Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.*/

// approach : sliding window approach


#include <iostream>
using namespace std;
int calculateMaxSum(int arr[], int size) {
    int global_sum = INT32_MIN;
    
    for(int k = 1 ; k <= size ; k++) {      //  this loop for no of windows
        int window_sum = 0;
        for(int i = 0 ; i < k ; i++) {       // 
            window_sum += arr[i];
        } 
        int max_sum = window_sum;
        for(int i = k ; i<size; i++) {
            window_sum += arr[i]-arr[i-k];          // add new ele to window and remove first one
            max_sum = max(max_sum,window_sum);
        }
        global_sum = max(global_sum,max_sum);
    } 
    return global_sum;
}
int main() {
    int size;
    cout<<"Enter the size of array :" ;
    cin>>size;
    int arr[size];
    cout<<"Enter the array element :" ;
     
    for(int i = 0 ; i < size ; i++) {
        cin>>arr[i];
    }
    int sum = calculateMaxSum(arr,size);
    cout<<"Maximum sub aray sum : "<<sum;
    return 0;
}


// 2nd approach :this is a effiecint approach than before
/*
int maxSubArray(vector<int>& arr) {
        int size = arr.size();
        int maxSum = INT_MIN, currentSum = 0;

    for (int num : arr) {
        currentSum += num;
        maxSum = max(maxSum, currentSum);

        if (currentSum < 0) 
           currentSum = 0;
    }

    return maxSum;
}*/