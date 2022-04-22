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
        int n,x,count=0;
        cin >> n >> x;
        vector<int>vec;
        for(int i=0 ; i<n ; i++){
            int x;
            cin >> x;
            vec.push_back(x);
            // sum += arr[i];
        }
        int temp=x;
        int mini = *min_element(vec.begin(), vec.end());
        while(mini<=x){
            for(int i=0 ; i<n ; i++){
                if(vec[i]<=x){
                    count++;
                    x -= vec[i];
                }
                // else continue;
                vec[i]++;
                
                
            }
            x=temp;
            mini++;
        }
        cout<<count<<endl;
    }
    return 0;
}