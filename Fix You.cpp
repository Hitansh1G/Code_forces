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
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
using namespace std;
int main() {
    int t, a, b, min = 0, j, k;
    int n, m;
    string righ = "R", dow = "D", temp;
    cin >> t;
    while (t--) {
        min = 0;
        cin >> n >> m;
        char** mat = new char * [n];
        for (int i = 0;i < n;i++) {
            mat[i] = new char [m];
        }
        for (a = 0;a < n;a++) {
            for (b = 0;b < m;b++) {
                cin >> mat[a][b];
            }
        }
        /*for (a = 0;a < n;a++) {
            for (b = 0;b < m;b++) {
                cout << mat[a][b]<<" ";
            }
            cout << endl;
        }*/
       for (j = 0;j < n - 1;j++) {
           temp = mat[j][m - 1];
            if (temp != dow)
                min++;
 
        }
        for (k = 0;k < m - 1;k++) {
            temp = mat[n - 1][k];
            if (temp != righ)
                min++;
 
        }
        cout << min << endl;
 
    }
	return 0;
}     