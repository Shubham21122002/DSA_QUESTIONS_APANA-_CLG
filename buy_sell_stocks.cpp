/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to 
buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. 
If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
*/

#include <iostream>
#include<vector>
using namespace std;
int checkProfit(vector<int>&nums, int size){
    int min_price = nums[0];
    int max_profit = 0;

    for(int  i = 0 ; i <size ; i++){
        min_price = min(min_price,nums[i]);
        max_profit = max(max_profit,nums[i]-min_price);
    }

    return max_profit;
}
int main() {
    int size;
    cout<<"Enter the size of array :" ;
    cin>>size;
    vector<int>nums(size);
    cout<<"Enter the array element :" ;
    for(int i = 0 ; i < size ; i++) {
    cin>>nums[i];
    }

    int profit = checkProfit(nums,size);

    cout<<"Profit : "<<profit;
    return 0;
}