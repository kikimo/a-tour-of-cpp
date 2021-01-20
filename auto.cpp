#include <iostream>

using namespace std;

int main()
{
    int arry[] = {1, 2, 3, 4};

    for (auto e : arry) {
	cout << e << '\n';
    }
    cout << '\n';

    // loop with ref
    for (auto &e : arry) {
	cout << e << '\n';
	e += 1;
    }
    cout << '\n';

    for (auto &e : arry) {
	cout << e << '\n';
    }
    cout << '\n';

    return 0;
}

