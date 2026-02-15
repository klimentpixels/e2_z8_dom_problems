#include <iostream>
using namespace std;

bool is_exact(int s, int v){

    return (s % v) == 0;
}

int main() {
    
    if ( is_exact(70, 70)) {cout << "true\n";} else {cout << "false\n";};
    if ( is_exact(70, 35)) {cout << "true\n";} else {cout << "false\n";};
    if ( is_exact(70, 30)) {cout << "true\n";} else {cout << "false\n";};
    if ( is_exact(70, 10)) {cout << "true\n";} else {cout << "false\n";};
    if ( is_exact(70, 11)) {cout << "true\n";} else {cout << "false\n";};
    
    // cout << is_exact(70, 35);
    // cout << is_exact(70, 30);
    // cout << is_exact(70, 10);
    // cout << is_exact(70, 11);


    return 0;
}
