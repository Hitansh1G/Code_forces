#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0);
    int n, m;
    char mp[110][110];
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> mp[i][j];
            if( mp[i][j] == '.'){
                if( (j+i) % 2 == 0)
                    mp[i][j]='B';
                else 
                    mp[i][j]='W';
            }
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j)
            cout<<mp[i][j];
        cout<<endl;
    }
    return 0;
}