#include<iostream>
using namespace std;

//Naive Method
/*int countZeros(int n){
    int fact =1;
    for(int i=2; i<=n; i++)
        fact = fact*i;

    int ans = 0;
    while(fact%10==0){
        ans++;
        fact=fact/10;
    }
    return ans;
}*/

int countZeros(int n){
    int ans=0;
    for(int i=5; i<=n; i=i*5)
        ans = ans+ n/i ;

    return ans;
}

int main(){

    int number = 200;
    cout<<countZeros(number)<<endl;

    return 0;
}