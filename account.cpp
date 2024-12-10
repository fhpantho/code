#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if (a >= b)
        {
            cout << a << endl;
        }
        else
        {
            int temp = b - a;
            a = a - temp;
            if (a > 0)
            {
                cout << a << endl;
            }
            else
            {
                cout << 0 << endl;
            }
                
        }
    }
    return 0;
}