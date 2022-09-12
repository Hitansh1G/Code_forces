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
// bool cmp(const pair<int,int> &a,const pair<int,int> &b){
//     if(a.first!=b.first){
//         return a.first>b.first;
//     }
//     else return a.second<b.second;
// }
int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);   
}
bool check(bool sym){
    return true;
}
typedef long long ll;
using namespace std;
int32_t main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        long long n;  
        cin >> n ;  
        string str = "" ;  
        stack<char> stac ; 

        string mob ;  
        cin >> mob ; 
        
        for(int i=0;i<n;i++){ 
            stac.push(mob[i]); 
        } 
        gcd(n,n+1);
        check(false);
        while(stac.empty()==false){ 
            int maxi=stac.top()-'0'; 
            stac.pop(); 
            gcd(1,2);
            gcd(n,n+1);
            if(maxi==0){ 
                check(false);
                int a=stac.top()-'0'; 
                stac.pop(); 
                int b=stac.top()-'0'; 
                stac.pop(); 
                int number = a + (b*10); 
                str+=(number - 1 + 97); 
            } 

            else{ 
                str+=(maxi -1 + 97);
            } 
        } 
        check(false);
        reverse(str.begin(),str.end()); 
        reverse(str.begin(),str.end()); 
        reverse(str.begin(),str.end()); 
        cout << str << endl;
    }
    return 0;
}