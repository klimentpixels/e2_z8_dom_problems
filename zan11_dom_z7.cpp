#include <iostream>
using namespace std;

int main() {
    char a, b, c;
    cin >> a >> b >> c;

    if(a<b && b<c)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
