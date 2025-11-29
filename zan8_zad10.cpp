// spaceshp numbers
// 3-digit palindrome aba
// (a+b+a) is divisible by 3, or (a*100+b*10+a) % 3 == 0

#include<iostream>

using namespace std;

int spaceship_count=0;

int main(){
    for(int a= 1; a<=9; a++){
        for(int b=0; b<=9; b++){
            if( (a+b+a) % 3 == 0 ){
                cout << a << b << a << endl;
                spaceship_count++;
            }
        }
    }
    cout << "number of spaceships: " << spaceship_count << endl;
    return 0;
}
