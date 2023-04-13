#include<iostream>
using namespace std;

//Naive Solution
/*int lcm(int a, int b){

    int ans = max(a,b);
    while(true){
        if(ans%a==0 && ans%b==0)
            break;

       ans++;
    }

    return ans;
}*/

//a*b=gcd(a,b)*lcm(a,b)

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}




int main(){

    int a=4, b=6;
    cout<<lcm(4,6)<<endl;

    return 0;
}