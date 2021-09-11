#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int n , m ,flag = -1 ;
    cin >> n ;
    cin >> m ;
    for(int i = n+1 ; i <= m ; i++){
        int count = 0;
        for( int j=2 ; j < i ; j++){
            int temp = i % j ; 
            if( temp ==0){
                count = count + 1;
            }      
        }
        // cout << "\t"<< count<< "\t" ;
        if( count == 0 && i < m ){
            //this is a prime no
            cout << "NO";
            exit(0);

            // flag = i;

        }
        else if (count ==0 && i == m){
            flag = i;
    
        }
    }
    if(flag == m){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}