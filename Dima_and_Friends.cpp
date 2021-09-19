#include<iostream>
using namespace std;
int main(){
     int n , s = 0 ,a ,flag = 0;
     cin >> n ;
     for( int i = 0 ; i < n ; i++){
         cin >> a;
         s = s + a;
     }
     for ( int i = 5 ; i >= 1 ; i--){
         if (((s+i) % (n + 1)) != 1){
            flag++;
         }
     }
     
    cout << flag ;
    return 0;
}