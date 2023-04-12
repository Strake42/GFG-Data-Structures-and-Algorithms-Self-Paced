#include<iostream>
using namespace std;

//Naive Solution 
//Time Complexity: O(min(a,b))
/*int gcd(int a, int b){
    int ans = min(a,b);
    while(ans>0){
        if(a%ans==0 && b%ans==0)
            break;
        ans--;
    }

    return ans;
}*/

//Eulidean Algorithm
/*int gcd(int a, int b){
    while(a!=b){
        if(a>b)
            a=a-b;
        else    
            b=b-a;
    }

    return a;
}*/

//Optimized Implementation
int gcd(int a, int b){
    if(b==0)
        return a;
    else    
        return gcd(b,a%b);
}

int main(){

    int a=11, b=9;
    cout<<gcd(a,b)<<endl;

    return 0;
}