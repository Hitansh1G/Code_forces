#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
        long long int i,j,k;
        long long int n,m;

        cin>>n;
        long long int a[n],b[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        if(b[0]!=b[1])
        {
            for(i=0;i<n;i++)
            {
                if(a[i]==b[0])
                {
                    cout<<(i+1);
                    break;
                }
            }
        }

        else
            cout<<"Still Rozdil";

        return 0;
}