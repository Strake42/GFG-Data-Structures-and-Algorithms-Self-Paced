#include<iostream>
using namespace std;

bool checkPalindromeNumber(int n){

    int reverse=0;
    int temp=n;
    while(temp>0){
        int x = temp%10;
        temp=temp/10;

        reverse = reverse*10 + x;

    }

    return reverse==n;
}
 
 int main(){

    int number = 2332;
    cout<<checkPalindromeNumber(number);

    return 0;
 }