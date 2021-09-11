#include<iostream>
#include<string>
using namespace std;
int main(){
    string n , m;
    cin >> n >> m ;
    int len = n.length();
    for(int i = 0 ; i < len ; i++){
        if(n[i] == m[i]){
            cout << "0";
        }
        else{
            cout << "1";
        }
    }

    
    return 0;
}