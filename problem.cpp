#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int a = 0;
    a = 2 * y;
    if (x >= a || a <= x)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}