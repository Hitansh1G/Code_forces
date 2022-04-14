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
        int N;
        cin >> N; 
        int res = 0;
        int A[2*N + 1];
        for (int i=0 ; i<2*N+1 ; i++){
            A[i] = INT_MAX  ;
        }
        for (int i=1 ; i<=N ; i++){ 
            int C;
            cin >> C;
            A[C] = i; 
        }
        for (int i=1 ;i<2*N ; i++){ 
            for (int j=1 ; j<= sqrt(i) ; j++){
                if(i % j == 0 && i != j*j && A[j] + A[i/j] == i)
                    res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}