/*
Input:[3 1 2 5 3] 

Output:[3, 4] 

repeat = 3, missing= 4
*/
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int>find(vector<int>&nums , int size){
    vector<int> ans(2);
    unordered_map<int,int> freq;

    for(int num :nums){
        freq[num]++;
    }
    for(int i = 0 ; i<size ; i++){
        if(freq[i]==2){
             ans[0]=i;
        }
        if(freq[i]==0){
            ans[1]=i;
        }
    }
    return ans;
    
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
    vector<int> ans = find(nums,size);
    cout<<"Missing : "<<ans[1]<<endl;
    cout<<"Repeat : "<<ans[0];
    return 0;
}