#include <iostream>
#include <string>
using namespace std;

int main() {
    string borze;
    string integer ;
    cin >> borze;
    int len=borze.length();
    for(int i =0 ; i < len ; i++){
        if(borze[i]=='.'){
            integer = integer + '0';
            ++i;
        }
        if(borze[i]=='-' && borze[i+1]=='.'){
            integer = integer + '1';
            ++i;
        }
        if(borze[i]=='-' && borze[i+1]=='-'){
            integer = integer + '2';
            ++i;
        }
    }
    cout << integer;
    return 0;
}