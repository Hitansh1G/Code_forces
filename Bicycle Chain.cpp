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
using namespace std;
int main(){
    Fast
    int n, m, a[50], b, max(0), count(1);
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; ++i){
        cin >> b;
        for (int j = 0; j < n; ++j){
            if (b % a[j] == 0){
                int x = b / a[j];
                if (x > max){
                    max = x;
                    count = 1;
                }
                else if (x == max){
                    count += 1;
                }
                break;
            }
        }
    }
    cout << count << endl;

    return 0;
}