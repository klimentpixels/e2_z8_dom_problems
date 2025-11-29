// abab
// ab = a*b +a +b

#include<iostream>

using namespace std;

int main(){
    for(int a= 1; a<=9; a++){
        for(int b=0; b<=9; b++){
            if( (a*10+b) == (a*b +a +b) ){
                cout << a << b << a <<b << endl;
            }
        }
    }
    return 0;
}
