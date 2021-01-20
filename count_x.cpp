#include <iostream>

using namespace std;

void count_x(const char *p, char x)
{
    int count = 0;

    if (p == nullptr) return;
    for (;p != nullptr; ++p) {
	if (*p == x) count++;
    }

    cout << count;
}

int main()
{
    count_x("hello world", 'l');
    return 0;
}
