#include <iostream>
using namespace std;

int main() {
    char lo, up, dig, key;
    cin >> lo >> up >> dig >> key;

    int shift= key - 'a' +1; 

    lo= (lo - 'a' + shift) % 26 + 'a';

    up= (up - 'A' - shift) % 26;
    if(up<0) up+= 26;
    up+= 'A';

    dig= (dig - '0' + shift) % 10 + '0';

    cout << lo << up << dig;

    return 0;
}
