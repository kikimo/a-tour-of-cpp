#include <iostream>

using namespace std;

void loop(char *p) {
    while (*p) {
	cout << *p;
	p++;
    }

    cout << '\n';
}

int main()
{
    char word[] = "hello world";
    // cout << word << '\n';
    loop(word);

    return 0;
}

