/* In ths question we have identify the duplicate character in string
after that print the remaning part of that particular string.*/
#include <iostream>
#include<unordered_map>
using namespace std;
string findDuplicate(string str){
    unordered_map<char, int > fre;
    string res = "";

    for(char ch :str){
        fre[ch]++;
    }
    for(char ch : str){
        if(fre[ch]==1){
            res += ch;
        }
    }
return res;

}
int main() {
    string str;
    cout<<"Enter the any String : ";
    getline(cin, str);   
    string output = findDuplicate(str);
    cout<<"Remaning string :"<<output;
    
    return 0;
}