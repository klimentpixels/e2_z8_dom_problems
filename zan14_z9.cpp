#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int d = 2;  // start checking from 2

    while (d <= n) {
        if (n % d == 0) {   // ako n se deli na d bez ostatyk
            cout << d;     // towa e 
            break;         // stop while 
        }
        d++;               // ako ne-- probwame drugo
    }

    return 0;
}
