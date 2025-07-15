/*
    Given an integer array nums, return true if any value 
    appears at least twice in the array, and return false 
    if every element is distinct.
*/
#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> freq;
    for(int num : nums){
        if(freq.count(num)){
            return 1;
        }
        freq.insert(num);
    }
    return 0; 
}
int main() {
    int size,ele;
    cout<<"Enter the size of array :" ;
    cin>>size;
    vector<int>nums(size);
    for(int i=0;i<size;i++) {
        cin>>nums[i];
   }    
   if(containsDuplicate(nums)) {
    cout<<"Contain duplicate value";
   } else {
    cout<<"Duplicate value is not present";
   }
    return 0;
}
/*An unordered set is a data structure in C++ (from <unordered_set> library) 
that stores unique elements without any particular order.

It does not allow duplicate values.

The average time complexity for insertion, deletion, and search operations is O(1) (constant time).

Internally, it is implemented using a hash table, which allows fast lookups.

*/

// 2nd approach :

/*
   
int findDuplicateUsingSort(vector<int>& nums) {
    sort(nums.begin(), nums.end());  // O(n log n)
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) {
            return nums[i];
        }
    }
    return -1; // No duplicate
}



*/