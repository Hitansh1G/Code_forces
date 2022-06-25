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
    // int n;
    // cin >> n ;
    // int arr[n];
    // for(int i=0 ; i<n ; i++){
    //     cin >> arr[i];
    // }
    // int sum=0;
    // for(int i=n-1 ; i>0 ; i--){
    //     if(arr[i-1]<arr[i]){
    //         // sum += arr[i];
    //         continue;
    //     }
    //     else{
    //         arr[i-1] = arr[i]-1;
    //     }
    // }
    // for(int i=0 ; i<n ; i++){
    //     // cout<<arr[i]<<" ";
    //     if(arr[i]<0)continue;
    //     else sum+=arr[i];
    // }
    int n;
    cin >> n;
    int a[n];
	for(int i=0;i<n;i++)
        cin >> a[i];
	int M=2012345678;
	long long ans=0;
	for(int i=n ; i-- ;){
		a[i] = min(a[i] , M-1);
		if( a[i]<0 )
            a[i]=0;
		M=a[i];
		ans+=a[i];
	}
    cout<<ans;
    return 0;
}