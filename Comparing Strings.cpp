#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

#define SZ(v) ((int)((v).size()))
#define REP(i, n) for(int i=0;i<(int)(n);++i)
#define LOOP(i,b, n) for(int i=(b);i<(int)(n);++i)

int main(){
    string a,b;
    cin >> a >> b;
    int n = SZ(a);
    if(n != SZ(b)){
        cout << "NO";
        return 0;
    }
    REP(i,n){
        if(a[i] != b[i]){
            LOOP(k,i+1,n){
                if(a[k] == b[i]){
                    swap(a[i],a[k]);
                if(a == b){
                    break;
                }
                swap(a[i],a[k]);
                }
            }
            break;
        }
    }
    if(a == b)
        cout <<"YES";
    else
        cout <<"NO";
    return 0;
}