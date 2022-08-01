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

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);   
}

int32_t main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str= "";

        if(n>9){
            for(int i=9 ; i>=1 ; i--){
                if(n-i < 0){
                    continue;
                }
                else{
                    str += (i+48);
                    n = n - i;
                }
            }
            int m = str.length();
            string rev;
            for (int i=m-1 ; i>=0 ; i--)
                rev.push_back(str[i]);


            cout<<rev<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
    return 0;
}