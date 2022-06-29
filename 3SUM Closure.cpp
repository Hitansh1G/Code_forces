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
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin >> n;
//         int arr[n];
//         bool flag = false;
//         for(int i=0 ; i<n-2 ; i++){
//             for(int j=i+1 ; j<n-1 ; j++){
//                 for(int k=j+1 ; k<n ; k++){
//                     if(helper(arr[i]+arr[j]++arr[k])==true)
//                 }
//             }
//         }
//     }
//     return 0;
// }
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int brr[100];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int, int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        int p=0;
        for(int i=0, j=i+1,k=i+2; i<n-2, j<n-1, k<n; ){
            while(k<n){
                brr[p]=arr[i]+arr[j]+arr[k];
                j++;
                k++;
                p++;
            }
            i++;
            j=i+1;
            k=i+2;
        }
        int flag=1;
        for(int i=0;i<p;i++){
            if(m.count(brr[p])<1){
                flag=0;
            }
        }
        if(flag==1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}