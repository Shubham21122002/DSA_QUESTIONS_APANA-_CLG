#include <iostream>
#include<vector>
using namespace std;
/*
bool isValidDigits(const vector<int>& nums, int start) {
    for (int i = start; i < nums.size(); i++) {
        if (nums[i] < 0 || nums[i] > 9)
            return false;
    }
    return true;
}

bool checkValid(vector<int>& nums) {
    int len = nums.size();

    if (len == 10) {
        return isValidDigits(nums, 0);
    }
    else if (len == 12) {
        if (nums[0] == 9 && nums[1] == 1) {
            return isValidDigits(nums, 2);
        } else {
            return false;
        }
    }
    else if (len == 11) {
        if (nums[0] == 0 || (nums[0] >= 7 && nums[0] <= 9)) {
            return isValidDigits(nums, 1);
        } else {
            return false;
        }
    }

    return false;  // Final return to avoid missing cases
}

*/

//-----------------------------------------------------------------
string removeSpaces(const string &number ){
    string result;
    for(char ch : number){
        if(ch != ' '){
            result += ch;
        }
    }
    return result;

}
bool checkDig(const string &number , int start = 0){
    for(int  i = start ; i < number.length() ; i++){
        if (!isdigit(number[i]))
            return false;
    }
    return true;
    
}
bool checkValid(string number){
    number = removeSpaces(number);

    if(number.length () == 13 && number .substr(0, 3) == "+91" ){
        return checkDig(number , 3);
    }

    if (number.length() == 11 && number[0] == '0') {
        return checkDig(number, 1);
    }

    // Step 5: Handle plain 10-digit number
    if (number.length() == 10) {
        return checkDig(number, 0);
    }

    // If none match
    return false;
}



int main() {
    
  string number;

    // Input with spaces and optional +91
    number = "+91 93097 64987";    // Valid
    cout << number << " : " << (checkValid(number) ? "Valid" : "Invalid") << endl;

    number = "91 93097 64987";     // Valid
    cout << number << " :" << (checkValid(number) ? "Valid" : "Invalid") << endl;

    number = "09309764987";        // Valid
    cout << number << " : " << (checkValid(number) ? "Valid" : "Invalid") << endl;

    number = "93097 64987";        // Valid
    cout << number << " : " << (checkValid(number) ? "Valid" : "Invalid") << endl;

    number = "+91-93097-64987";    // Invalid (hyphens not supported)
    cout << number << " : " << (checkValid(number) ? "Valid" : "Invalid") << endl;
    return 0;
}