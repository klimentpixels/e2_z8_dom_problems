#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a natural number: ";
    cin >> n;

    int count = 0;
    int d = 2;

    while (n > 1) {
        if (n % d == 0) {
            count++;        // we found a new unique prime factor
            while (n % d == 0) {
                n /= d;     // remove ALL copies of this prime
            }
        }
        d++;
    }

    cout << "Number of unique prime factors: " << count;

    return 0;
}
