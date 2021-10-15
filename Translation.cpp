#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	string s,s2;
	cin>>s;
	cin>>s2;
	reverse(s.begin(),s.end());
	if(s==s2)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}