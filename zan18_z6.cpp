    

#include <iostream>
using namespace std;

bool isDigitDivisible(int n) {
    if(n<=0) {
        return false;
    }
    
    int temp= n;
    while(temp > 0){
        int digit= temp % 10;
        if(digit != 0){
            if(n % digit != 0) {
                return false;
            }
        }
        temp /= 10; // temp= temp/10;
    }
    return true;
}

int main() {
    
    int A, B;
    cout << "Input A= ";
    cin >> A;
    cout << "Input B= ";
    cin >> B;
    
    cout << "the self-gen numbers from A to B are: \n";
    
    for(int i= A; i <= B; i++){
        if(isDigitDivisible(i)){
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
