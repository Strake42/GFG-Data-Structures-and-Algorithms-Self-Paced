#include<iostream>
using namespace std;

//Naive Solution
 /*void printDivisors(int n){
    for(int i=1; i<=n; i++)
        if(n%i==0)
            cout<<i<<" ";
 }*/
 //Efficient Solution
 void printDivisors(int n){
    int i;
    for(i=1; i*i<=n; i++)
        if(n%i==0)
            cout<<i<<" ";
    for( ; i>=1; i--){
        if(n%i==0)
            cout<<n/i<<" ";
    }
 }
int main(){
    int number = 15;
    printDivisors(number);

}