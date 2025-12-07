#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number n: ";
    cin >> n;

    cout << endl;

    // Loop through numbers from 2 to n
    for (int i = 1; i <= n; i++) {
        int count = 0;

        // Count divisors of i
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        // Prime numbers have exactly 2 divisors: 1 and itself
        if (count == 2) {
            cout << i << " is prime." << endl;
        }
    }

    return 0;
}
