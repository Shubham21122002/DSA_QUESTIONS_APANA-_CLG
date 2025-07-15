/* In ths question we have identify the duplicate character in string
after that print the remaning part of that particular string.*/

/*
#include <iostream>
#include<unordered_map>
using namespace std;
string findDuplicate(string str){
    unordered_map<char, int > fre;
    string res = "";

    for(char ch :str){
        fre[ch]++;
    }
    for(auto i : fre){
        char key = i.first;
        int value = i.second;

        cout<<key<<value;
    }

}
int main() {
    string str;
    cout<<"Enter the any String : ";
    getline(cin, str);   
    string output = findDuplicate(str);
    
    
    return 0;
}
*/

#include <iostream>
using namespace std;

string removeDuplicates(string str) {
    
    for (int i = 0; i < str.length(); i++) {
        bool duplicate = false;
        int count = 0;
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
          
            for(int k = 0 ; k < str.length(); k++){
                if(str[k] == str[i]){
                    count++;
                }
            }
        }

        if(count > 0){
            cout<<str[i]<<count;
        }
    }
}

int main() {
    string str;
    cout << "Enter any string: ";
    getline(cin, str);

   removeDuplicates(str);
    
    return 0;
}
