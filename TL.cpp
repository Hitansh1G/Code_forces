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
using namespace std;
int main(){
    int a, b, i, j, ck = 0, v, p, c, v1, p1, c1, dk = 0;
    cin >> a >> b;
    int arr[a] ,brr[b];
    for( i=0 ; i<a ; i++){
        cin >> arr[i];
    }
    sort(arr, arr+a);
    for(j=0; j<b; j++){
        cin>>brr[j];
    }
    sort(brr, brr+b);
    v = arr[0];
    p = arr[a-1];
    c = brr[0];
    ck = max(2*v,p);
    if(ck<c){
        cout<<ck<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }


    return 0;
}