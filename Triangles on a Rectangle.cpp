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
void solve(){
            int n;
            cin>>n;
            vector<string>s(n);
            for(int i=0;i<n;i++)
                cin>>s[i];
            vector<int>ans(10,0);
            vector<int>minir(10,n);
            vector<int>minic(10,n);
            vector<int>maxir(10,-1);
            vector<int>maxic(10,-1);
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    int num=s[i][j]-'0';
                    minir[num]=min(minir[num],i);
                    maxir[num]=max(maxir[num],i);
                    minic[num]=min(minic[num],j);
                    maxic[num]=max(maxic[num],j);
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    int num=(int)s[i][j]-'0';
                    ans[num]=max(ans[num],max(maxir[num]-i,i-minir[num])*max(n-j-1,j));
                    ans[num]=max(ans[num],max(maxic[num]-j,j-minic[num])*max(n-i-1,i));
                }
            }
            for(auto i : ans)
                cout<<i<<" ";
            cout<<"\n";
        }
        int main(){
            ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            // cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";
                solve();
            }
            return 0;
        }