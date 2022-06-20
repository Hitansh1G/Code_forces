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
int32_t main(){
    Fast
    int n;
    /*
    Tetrahedron. Tetrahedron has 4 triangular faces.
    Cube. Cube has 6 square faces.
    Octahedron. Octahedron has 8 triangular faces.
    Dodecahedron. Dodecahedron has 12 pentagonal faces.
    Icosahedron. Icosahedron has 20 triangular faces.
    */
    cin >> n;
    string str;
    int count =0 ;
    while(n--){
        cin >> str;
        if(str=="Tetrahedron")count+=4;
        if(str=="Cube")count+=6;
        if(str=="Octahedron")count+=8;
        if(str=="Dodecahedron")count+=12;
        if(str=="Icosahedron")count+=20;

    }
    cout<<count<<endl;
    return 0;
}