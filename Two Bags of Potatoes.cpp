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
using namespace std;
int main(){
    int y, k, n;
    cin >> y >> k >> n;
    int x = k - y % k;
    int top = n - y;
    if (x <= top){
        cout << x <<" ";
        x += k;
        while (x <= top){
            cout << x <<" " ;
            x += k;
        }
        cout <<"\n";
    }
    else{
        cout <<"-1"<<"\n";
    }
    return 0;
}