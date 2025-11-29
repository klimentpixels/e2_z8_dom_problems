// Fibonacci

#include<iostream>
using namespace std;

int main(){

    int n, previous, current;
    cout<<"input n:"<<endl;
    cin>>n;

    previous = 0, current = 1;
    
    if(n<=1) current=n;
    else{
        for (int i = 2; i <= n; i++) {
            int next = previous + current;
            previous = current;
            current = next;
        }
    }

    cout << "Fibonacci(" << n << ") = " << current << endl;
    return 0;
}
