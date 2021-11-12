#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#define ll long long 

using namespace std;

int checkAllValues(vector<int>arr){
    for (auto& it : arr){
        if(it == 1){
            return true;
        }
        else 
            return false;
    }
            return false;
}
int main(){
    ll n,k ,count=0,input;
    cin >> n >> k;
    vector<int>s;
    for(int i = 0 ; i < n ; i++){
        cin >> input;
        s.push_back(input);
    }
    if(s[k-1]!=1){
        cout<<"-1";
    }
    else {
            
            for(int i = 0 ; i < n ; i++){
                while(checkAllValues(s)==false){
                    int temp = s[k];
                    s.push_back(temp);
                    s.erase(s.begin());
                    count++;
                }
            }
            cout << count << endl;
    }

    return 0;
}