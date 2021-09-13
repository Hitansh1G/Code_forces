#include<iostream>
using namespace std;
int main(){
     int n ,countl0 = 0, countl1 = 0, countr0 = 0, countr1 = 0 ;
     cin>>n;
     int l , r , temp1 , temp2;
     for(int i = 0 ; i < n ; i++){
         cin >> l >> r;
         if( l == 0 ){
             countl0 = countl0 + 1; 
         }
         else if(l == 1){
             countl1 = countl1 + 1;
         }
         if( r==0){
             countr0 = countr0 + 1;
         }
         else if(r==1){
             countr1 = countr1 + 1;
         }
         if (countl0 < countl1){
            temp1 = countl0;
         }
         else {
             temp1 = countl1;
         }
         if (countr0 < countr1){
            temp2 = countr0;
         }
         else {
             temp2 = countr1;
         }
         
     }
     int sum = temp1+ temp2;
     cout << sum ;
    return 0;
}