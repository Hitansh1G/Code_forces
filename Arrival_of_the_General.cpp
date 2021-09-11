#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int height[a] , max = 0 , min = 101, temp1 , temp2 ;
    for( int i = 0; i < a ; i++)
    {
        cin >> height[i];
        if( height[i] > max)
        {
            max = height[i];
            temp1 = i;
        }
        if( height[i] <= min)
        {
            min = height[i];
            temp2 = i;
        }
    }
    if( temp1 > temp2 )
    {
        temp2++;
    }

    cout << temp1 + ( a - 1 ) - temp2;
}