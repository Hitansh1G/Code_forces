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
int vasya(int n, vector<int>list , int m, vector<int>queries){
    int count1=1;
    for(int i=0 ; i<m ; i++){
        for(int j=1 ; j<=n ; j++){
            if(queries[i] != list[j]){
                count1++;
            }
            else break;
        }
    }
    return count1;
}

int petya(int n, vector<int>list , int m, vector<int>queries){
    int count2=1;
    for(int i=0 ; i<m ; i++){
        for(int j=n ; j>0 ; j--){
            if(queries[i] != list[j]){
                count2++;
            }
            else break;
        }
    }
    return count2;
}

int main(){
    Fast
    int n,temp,m;
    vector<int>list;
    vector<int>queries;
    cin >> n;
    for(int i=1 ; i<=n ; i++){
        cin >> temp;
        list.push_back(temp);
    }
    cin >> m;
    for(int i=0 ; i<m ; i++){
        cin >> temp;
        queries.push_back(temp);
    }
    int ans1 = petya(n, list, m, queries);
    int ans2 = vasya(n, list, m, queries);
    cout<< ans1 << " " << ans2;
    return 0;
}