/*
or example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]

*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>& nums) {
    int size = nums.size();
    int i,j;
    for(i =size-2 ; i>=0 ; i--){
        if(nums[i]<nums[i+1]){
            break;
        }
        
    }
    if(i>=0){
        for(j =size-1 ; j>i ; j--){
            if(nums[j]> nums[i]) {
                swap(nums[j],nums[i]);
                break;
            }
        }
    }
    reverse(nums.begin()+i+1,nums.end());
    
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
    nextPermutation(nums);
    
    for(int i = 0 ; i < size ; i++) {
    cout<<nums[i];
    }

    return 0;
}
/*
Input: nums = [1,2,3]
Step-by-step:

Find i: nums[1] = 2 (since 2 < 3, i = 1).

Find the next larger element: nums[2] = 3 (swap 2 and 3).

Reverse the right portion: [1,3,2].

Output: [1,3,2]
*/