#include<iostream>
using namespace std;

//Naive Method
bool isPrime(int n){
    if(n==1)
        return false;
    for(int i=2; i<n; i++){
        if(n%i==0)
         return false;
    }

    return true;
}
 
 int main(){
int number = 17;
cout<<isPrime(17)<<endl;

    return 0;
 }