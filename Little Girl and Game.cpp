#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int Palindrome(string str){
    int len=str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return false;
        }
    return true;
}

int main(){
    string s;
    cin >> s;
    for(int i = 1 ; i > 0 ; i++){
        if(Palindrome(s)==true){
            if(i%2==1){
                cout<<"First"<<endl;
                break;
            }
            else{
                cout<<"Second"<<endl;
                break;
            }
        }
        else{
            s.pop_back();

        }
    }

    return 0;
}