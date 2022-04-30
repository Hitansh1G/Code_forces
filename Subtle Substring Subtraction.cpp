#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<unordered_map>
#include<unordered_set>
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
using namespace std;
int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        string s;
        int even=0 , odd=0 ,even1=0,odd1=0;;
        cin >> s; 
        int n=s.length();
        if(n==1){
            cout<<"Bob "<< s[0]-'a'+1 << endl;
        }
        
        else if(n%2==0){
            for(int i=0 ; i<n ; i++){
                even +=s[i]-'a'+1;
            }
            cout<<"Alice "<<even<<endl;
        }
        else{
            
            //for odd
            // char last , first ;
            // first = s[0];
            // last = s[s.length()-1];
            // if(int(last)>=int(first)){
            //     //alice ka score bdega 
            //     //last wali value include hogi 
            //     for(int i=1 ; i<s.size() ; i++){
            //         even += int(s[i])-96;
            //     }
            //     odd = int(first);
            //     if(odd<even){
            //         cout<<"Bob "<< int(first)-96 - even << endl;
                                                            
            //     }
            //     else{
            //         cout<<"Alice "<<even - odd + 96 <<endl;
            //     }
            // }
            // else{
            //     //alice ka score bdega 
            //     //first wali value include hogi 
            //     for(int i=0 ; i<s.size()-1 ; i++){
            //         even += int(s[i])-96;
            //     }
            //     odd = int(last);
            //     if(odd<even){
            //         cout<<"Bob "<< int(last)-96 -even << endl;
                                                    
            //     }
            //     else{
            //         cout<<"Alice "<<even-odd+96<<endl;
            //     }

            // }
            for(int i=1 ; i<n ; i++){
                even +=s[i]-'a'+1;
            }
            odd=s[0]-'a'+1;
            for(int i=0 ; i<n-1 ; i++){
                even1+=s[i]-'a'+1;
            }
            odd1=s[n-1]-'a'+1;
            if(even>even1){
                if(even>odd){
                    cout<<"Alice "<<even-odd<<endl;
                }
                else cout<<"Bob "<<odd-even<<endl;
            }
            else{
                if(even1>odd1){
                    cout<<"Alice "<<even1-odd1<<endl;
                }
                else cout<<"Bob "<<odd1-even1<<endl;
            }

        }
    }
    return 0;
}