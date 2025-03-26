#include <iostream>
#include<vector>
using namespace std;
int find_Pivot(vector<int>& arr, int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[end]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
}

int find_Element(vector<int>& arr, int n, int key, int p) {
    int start, end;

    if (arr[p] <= key && key <= arr[n - 1]) {
        start = p;
        end = n - 1;
    } else {
        start = 0;
        end = p - 1;
    }

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}
int main() {
    int size,target;
    cout<<"Enter the size of array :" ;
    cin>>size;
    vector<int>nums(size);    
    cout<<"Enter the array element :" ;
    for(int i = 0 ; i < size ; i++) {
        cin>>nums[i];
    }
    cout<<"Enter the target :";
    cin>>target;
    int pivot = find_Pivot(nums, size);
   cout<<"index of ele: "<<find_Element(nums, size, target, pivot);

}