#include <iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int red = 0;
    int green = 0;
    int blue = 0;
    for(int i = 1 ; i < n ; i++){
        if( s[i-1] == s[i] ){
            if(s[i] == 'R')
                red = red + 1;
            else if ( s[i] == 'G'){
                green = green + 1;
            }
            else if(s[i]=='B')
                blue = blue + 1;
        }
    }
    int sum = red + green + blue;
    cout << sum ; 
    
  	return 0;
}