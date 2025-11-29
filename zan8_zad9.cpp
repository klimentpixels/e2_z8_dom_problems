// closest Fibonacci

#include<iostream>
using namespace std;


int main(){

    int a, k;
    cout<<"input number a:" << endl;
    cin>>a;

    int n, previous, current;

    previous = 0, current = 1;
    n= 1;

    while(a > current){
    
        if(n<=1) current=n;
        else{
            for (int i = 2; i <= n; i++) {
                int next = previous + current;
                previous = current;
                current = next;
            }
        }
        n++;
    }
    cout << a << " < Fibonacci(" << n << ") = " << current << endl;
    return 0;
}
