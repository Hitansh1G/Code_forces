#include<iostream>
using namespace std;
bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
int main(){
    int t , count = 0;
    cin >> t ;
    int x[t], y[t];
    for ( int i = 0; i < t; i++){
        cin >> x[i] >> y[i];
    }
    
    
    for ( int i = 0; i < t; i++){
        count = 0 ;
        if(x[i]==1 && y[i]==2){
            count = 1;
            
        }
        else if(x[i]==1 && y[i]==3){
            count = 2;
            
        }
        else if(x[i]==2 && y[i]==3){
            count = 1;
            
        }
        else if(isPrime(x[i]+2) == true && x[i]+1 != y[i]){
            count = count +2;
        }
        else{
            count = count + 1;
        }
        cout << count << endl;
    }
    
    
    return 0;
}