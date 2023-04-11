#include<iostream>
using namespace std;

int countDigits(int x){
    int digits=0;
    while(x>0){
        x=x/10;
        digits++;
    }

    return digits;
}

int main(){

    int number = 2504;
    cout<<countDigits(number);

    return 0;
}