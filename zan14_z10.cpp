#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long product = 1;  // use long long so it can hold big results

    for (int d = 1; d <= n; d++) {
        if (n % d == 0) {   // deli li se n na d / if d divides n evenly
            product *= d;  // multiply it into the product
        }
    }

    cout << "Product of all divisors: " << product;

    return 0;
}
