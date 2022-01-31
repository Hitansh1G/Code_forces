#include <iostream>
#include <cstring>
using namespace std;

#include<bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;

char highestOccurringChar(char str[]) {
    // Write your code here
    int count[26] = {0};
    int len = strlen(str);
    int max = 0;  
    char result;   
    for (int i = 0; i < len; i++) {
        count[str[i]]++;
        if (max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }
    }
    return result;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}