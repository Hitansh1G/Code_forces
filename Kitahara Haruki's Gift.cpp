#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int no_of_apples, weight_i;
    cin >> no_of_apples;

    int no_of_100s = 0, no_of_200s = 0;
    for(int i = 1; i <= no_of_apples; i++){
        cin >> weight_i;
        no_of_100s += (weight_i == 100);
        no_of_200s += (weight_i == 200);
    }

    no_of_200s = no_of_200s%2;
    no_of_100s -= 2*no_of_200s; 

 
    if( (no_of_100s%2)==0 && (no_of_100s)>=0){
        cout << "YES";
    }
    else cout<<"NO";
    return 0;
}