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
        int n,m;
        cin >> n >> m;
        //lenth of a and lenth of s
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }
        string str="";
        for(int i=0 ; i<m ; i++){
            // str[i]='B';
            str+='B';
        }
        for(int i=0 ; i<n ; i++){
            
            int temp = arr[i];
            ll x,y;
            if((m+1-temp)>=temp ){
                x = temp;
            }
            else{
                x=m+1-temp;
            }
            if((m+1-temp)<temp ){
                y = temp;
            }
            else{
                y=m+1-temp;
            }



            if(str[x-1]=='B'){
                str[x-1]='A';
            }
            else{
                str[y-1]='A';
            }
            // if(arr[i]%2<m/2){
            //     if(str[i]=='A'){
            //         str[m-i]='A';
            //     }
            //     else{
            //         str[i]='A';
            //     }
            // }
            // else{
            //     if(str[i-m]=='A'){
            //         str[i]='A';
            //     }
            //     else{
            //         str[m-i]='A';
            //     }
            // }
        }
        cout<<str<<endl;

    }
    return 0;
}