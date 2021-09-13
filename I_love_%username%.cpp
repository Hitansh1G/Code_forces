#include<iostream>
using namespace std;
int main(){
    int n, count1=0,count2=0;
    int points[1000];
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> points[i];
    }
    int min = points[0];
    int max = points[0];
    for(int i = 0 ; i < n; i++){
        if(points[i]<min){
            min = points[i];
            count1++;

        }
        if(points[i]>max){
            max = points[i];
            count2++;
        }
    }
    cout << count1 + count2 << endl;
     
     
    return 0;
}