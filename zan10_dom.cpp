#include <iostream>
using namespace std;

int main() {
    char capital;
    cout << "Enter a capital letter (A-Z): ";
    cin >> capital;

    char small = capital + 32;

    cout << "The lowercase letter is: " << small << endl;

    return 0;
}
