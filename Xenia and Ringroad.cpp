#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int get_travel_time(int previous, int current, int no_of_houses){
    if (previous <= current){
        return current - previous;
    }
    else 
        return no_of_houses - previous + current;
    return no_of_houses - previous + current;

}
int main(){
    int no_of_houses, no_of_tasks;
    cin >> no_of_houses >> no_of_tasks;

    int previous_house = 1;
    long long total_time = 0;
    while(no_of_tasks--){
        int current_house;
        cin >> current_house;

        total_time += get_travel_time(previous_house, current_house, no_of_houses);

        previous_house = current_house;
    }

    cout << total_time;

    return 0;
}