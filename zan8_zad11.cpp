// abc --> from 100 to 999
// a<b<c
// a+b+c = 11

#include<iostream>

using namespace std;
int key_count=0;

int main(){
    for(int a= 1; a<=9; a++){
        for(int b=0; b<=9; b++){
            for(int c=0; c<=9; c++){
                if( a<b && b<c && (a+b+c ==11)){
                    cout << a << b << c << endl;
                    key_count++;
                }
            }
        }
    }
    cout << "number of special keys: " << key_count << endl;
    return 0;
}
