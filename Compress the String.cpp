#include <iostream>
#include <cstring>
#include<string>
using namespace std;

string compressTheString(string &s){
    int n = s.size();
    string compressString = "";
    int localCount = 0;
    int i = 0;
    int j = 0;
    for (i = 0; i < n; ++i){
        currentCharacter = s[i];
        localCount = 0;
        for (j = i; j < n; ++j){
            if(currentCharacter == s[j])
                localCount++;
            else 
                break;
        }
        if(localCount == 1){
            compressString = compressString + currentCharacter;
        }
        else{
            compressString = compressString + currentCharacter + to_string(localCount);
        }
        i = j - 1;
    } 
    return compressString;   
}
 

int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = compressTheString(str);
    cout << str << endl;
}