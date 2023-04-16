#include<iostream>
using namespace std;

//Naive Solution
/*int power(int x, int n){
    int ans = 1;
    for(int i=0; i<n; i++)
        ans = ans*x;

    return ans;
}*/

//Efficient Solution
int power(int x, int n){
    if(n==0) return 1;
    int temp = power(x,n/2);
    temp=temp*temp;
    if(n%2==0)
        return temp;
    else
        return temp*x;
}

//iterative
/*int power(int x, int n){
    int ans = 1;
    while(n>0){
        if(n%2!=0)
         ans=ans*x;
    x=x*x;
    n=n/2;
    }
    return ans;
}*/


int main(){
    int a=3,b=4;
    cout<<power(a,b)<<endl;

}