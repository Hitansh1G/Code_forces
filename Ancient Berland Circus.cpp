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
#include<iomanip>
#include<unordered_map>
#include<unordered_set>
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
using namespace std;
#define ld long double
 
const int MOD = 1e9+7;
ld gcd(ld x, ld y) {
    while (fabs(x) > 0.0001 && fabs(y) > 0.0001) {
        if (x > y)
                x -= floor(x / y) * y;
        else
                y -= floor(y / x) * x;
    }
    return x + y;
}
 
ld dist(ld x1, ld x2, ld y1, ld y2) {
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

int32_t main(){
    Fast
    ld x1,y1,x2,y2,x3,y3;
 	cin>>x1>>y1>>x2>>y2>>x3>>y3;
 
 	ld a,b,c;
 
 	a=dist(x1,x2,y1,y2);
 	b=dist(x2,x3,y2,y3);
 	c=dist(x3,x1,y3,y1);
 	//cout<<a<<" "<<b<<" "<<c<<"\n";
 
 	ld A = acos((b*b+c*c-a*a)/(2*b*c));
 	ld B = acos((a*a+c*c-b*b)/(2*a*c));
 	ld C = acos((a*a+b*b-c*c)/(2*a*b));
 
 	ld pi = 2*asin(1);
 
 	ld n = pi/gcd(gcd(A,B), C);
 
 	//cout<<A<<"\n";
 
 	ld ar=fabs((x2*y3-x3*y2)-(x1*y3-x3*y1)+(x1*y2-x2*y1))/2;
 	ld rad = a*b*c/(4*ar);
 
 	ld ans = (n/2)*rad*rad*sin(2*pi/n);
 
 	cout<<setprecision(15)<<ans;

    return 0;
}