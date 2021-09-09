#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 0 , m , n ;

    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 5; ++j)
        {
            cin >> x;
            if (x == 1)
            {
                m = abs(i-3);
                n = abs(j-3);
                cout << m + n << endl;
                
            }
        }
    }
    return 0;
}