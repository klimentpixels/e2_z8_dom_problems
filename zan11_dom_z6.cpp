#include <iostream>
using namespace std;

int main() {
    char digit, letter;
    cin >> digit >> letter;

    int d= digit - '0';
    int pos= letter - 'a' +1;

    cout << d * pos;

    return 0;
}
