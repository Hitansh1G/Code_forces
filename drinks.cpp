#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    int p;
    double sum = 0 ;
    cin >> n;
    for (int i =0 ; i < n ; i++){
        cin >> p;
        sum = sum + p;

    }
    double ans = sum / n;
    cout << setprecision(12) << ans ;
    
    return 0;
}