
#include <iostream>
using namespace std;

// prints self-numbers / colobian / self-gen / Kaprekar numbers

int sum_of_digits(int n){
    int sum= 0;
    while(n>0){
        sum+= n % 10;
        n/= 10;
    }
    return sum;
}

bool isSelfNumber(int n){
    for(int m = 1; m < n; m++){
        if(m + sum_of_digits(m) == n){
            return false;
        }
    }
    return true;
}


int main() {
    
    int N;
    cout << "Input N= ";
    cin >> N;
    
    cout << "Self-numbers / Colombian numbers till "  << N << ":\n";
    for(int i=1; i <= N; i++){
        if(isSelfNumber(i)){
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
