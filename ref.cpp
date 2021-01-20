#include <iostream>

using namespace std;

int main()
{
    int x = 8848;
    int &y = x;

    cout << "value of x:" << x << '\n';
    cout << "value of y:" << y << '\n';

    return 0;
}

