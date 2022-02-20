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
    // pehle paisa lia
    //check kra ki change ki zrort ha ye nhi 
    
        //if yes then check ki mere paas change ke liye paisa ha ye nhi 
            //if yes then print yes aur total mei se substract
            //else no
        //if no continue
    int n,i,a25=0,a50=0,a100=0;
    cin>>n;
    int a[n+9];
    for(i=0; i<n; i++){
        cin >> a[i];
        if(a[i] == 25) a25++;
        if(a[i]==50){
            a50++;
            a25--;
        }
        if(a[i]==100){
            if(a50>0){
                a25--;
                a50--;
            }
            else
                a25=a25-3;
        }
        if(a25<0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES"<<endl;
}