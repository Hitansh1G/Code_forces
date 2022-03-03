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

// int smallest(int x, int y, int z) {
//     int smallest = 99999;
//     if (x < smallest)
//         smallest=x;
//     if (y < smallest)
//         smallest=y;
//     if(z < smallest)
//         smallest=z;
//     return smallest;
// }

int main(){
    Fast
    long int i,j,a,b,c,n,k,ans,rem;
    cin>>n>>a>>b>>c;
    ans=0;
    for(i=0;i*a<=n;++i){
        for(j=0;i*a+j*b<=n;++j){
            rem=n-i*a-j*b;
            if(rem%c==0){
                k=rem/c;
                ans=max(ans,i+j+k);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}



/*
5 5 3 2
minimum fir usko total mei subract 

5-i

*/