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
int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);   
}
void print(vector<int>vec){
    for(int i=0 ; i<vec.size() ; i++){
        cout<<vec[i]<<" ";
        
    }
    cout<<endl;
}
void print1(vector<vector<int> > ans,int n){
    for (auto &i: ans) {
        for (auto &j: i)
            cout << j << ' ';
        cout << endl;
    }
}
int32_t main(){
    Fast
    int test;
    cin >> test;
    while(test--){
        int n;
        cin>>n;
        int temp=n;
        int count=0;
        vector<int>vec(n);
        vector<int>lom = vec;
        for(int i=0;i<n;i++){
            vec[i]=i+1;
        }
        
        cout<<temp;
        cout<<endl;
        
        while(temp--){
            for(int i=0 ; i<vec.size() ; i++){
                cout<<vec[i]<<" ";
                
            }
            cout<<endl;

            if(temp!=0) 
                swap(vec[count],vec[count+1]);


            count++;
        }
        
    }
    return 0;
}