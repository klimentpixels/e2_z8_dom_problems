#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number n: ";
    cin >> n;

    cout << endl;

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        int count = 0;

        // Check divisors of i
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) { // if j divides i evenly
                count++;
            }
        }

        cout << "Number " << i << " has " << count << " divisors." << endl;
    }

    return 0;
}
