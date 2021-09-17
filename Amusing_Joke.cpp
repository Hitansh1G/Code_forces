#include<iostream>
#include<string>
// #include<alogirthm>
#include <algorithm>
using namespace std;
int main(){
     string s1 , s2 , s3 , temp;
     cin >> s1 >> s2 >> s3 ;
     temp = s1 + s2 ;
    sort(temp.begin() , temp.end());
    sort(s3.begin() , s3.end());
    if(temp == s3 ){
        cout << "YES" << endl;
    }
    else{
        cout << "NO"<< endl;
    }
    return 0;
}