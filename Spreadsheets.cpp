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
    cin >> n;
    while(n--){
        string s;
        cin>>s;
        int num = 0;
        int i;
        string s1;
        for(i=0 ; i<s.size()-1 ; i++){
            if( s[i] <= 'Z' && s[i] >= 'A' && s[i+1] >= '0' && s[i+1] <= '9')
                num++;
        }
        if(num == 1){
                int r = 0,c = 0;
            for(i=0 ; i<s.size() ; i++){
                if(s[i] >= '0' && s[i] <= '9'){
                    r = r*10 + s[i] - '0';
                }
                if(s[i] <= 'Z' && s[i] >= 'A'){
                    c = c*26 + s[i] - 'A'+1;
                    //cout<<"c"<<c<<endl;
                }
            }
            cout<<"R"<<r<<"C"<<c<<endl;
        }
        else{
            int flag = 1,r = 0;
            for(i=1 ; i<s.size() ; i++){
                if(s[i]=='C') {
                    flag = i;
                    break;}
            }
            for(i=flag + 1 ; i<s.size() ; i++){
                r = r*10 + s[i] - '0';
            }
            int k =0;
            while(r){
                if(r%26==0) {
                    s1[k++] = 'Z';
                    r=r/26-1;}
                else{
                    s1[k++] = 'A' + r%26-1; 
                r/=26;}
            }
            for(i=k-1 ; i>=0 ; i--)
                cout<<s1[i];
            for(i=1 ; i<flag ; i++)
                cout<<s[i];
            cout<<endl;
        }

    }
    return 0;
}