#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a natural number: ";
    cin >> n;

    int count = 0;
    int d = 2;  // start checking from the smallest prime

    while (n > 1) {
        if (n % d == 0) {   // if d divides n
            count++;        // we found a prime factor
            n /= d;         // divide n by d
        } else {
            d++;            // try the next number
        }
    }

    cout << "Number of prime factors (with repeats): " << count;

    return 0;
}
