/*
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1].
 In this case, 6 units of rain water (blue section) are being trapped

 https://leetcode.com/problems/trapping-rain-water/description/

*/
#include <iostream>
#include<vector>
using namespace std;
int main() {
    int size;
    cout<<"Enter the size of array :" ;
    cin>>size;
    vector<int>nums(size);
    cout<<"Enter the array element :" ;
    for(int i = 0 ; i < size ; i++) {
    cin>>nums[i];
    }
    
    return 0;
}