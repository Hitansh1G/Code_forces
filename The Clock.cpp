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
int32_t main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        ll n;
        cin >> n;
        ll a = n / 60;
        ll b = n % 60;
        ll c = 10 * (str[0] - '0') + (str[1] - '0');
        ll d = 10 * (str[3] - '0') + (str[4] - '0');
        string temp = "";
        temp += str[0];
        temp += str[1];
        temp += str[3];
        temp += str[4];
        ll count = 0;
        if (temp[0] == temp[3] && temp[1] == temp[2])
            count++;
        string q = temp;
        while (1) {
            c += a;
            d += b;
            c += d / 60;
            d %= 60;
            c %= 24;
            temp = "";
            if (c / 10 == 0){
                temp += '0';
            }
            temp += to_string(c);
            if (d / 10 == 0){
                temp += '0';
            }
            temp += to_string(d);
            if (temp == q) {
                break;
            }
            if (temp[0] == temp[3] && temp[1] == temp[2]){
                count++;
            }
        }
        cout << count << endl;
    } 
    return 0;
}