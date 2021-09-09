#include<iostream>
using namespace std;

int main(){
    int n, t;
    // cout << " enter no of children ";
    cin >> n;
    // cout << " enter time ";
    cin >> t ;
    string queue;
    cin >> queue;
     while (t--){
        for (int i = 0; i < n; i++)
        {
            if (queue[i] == 'G' && queue[i-1] == 'B')
            {
                queue[i] = 'B';
                queue[i-1] = 'G';
                i++;
            }
        }
    }
    cout << queue << endl;
    return 0;

    
}