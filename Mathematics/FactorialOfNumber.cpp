#include <iostream>
using namespace std;

// Itrative Implimintation
int itrativeFactorial(int n)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
        ans = ans * i;

    return ans;
}

// Recursive
int recursiveFactorial(int n)
{
    if (n == 0)
        return 1;

    return n * recursiveFactorial(n - 1);
}

int main()
{

    int number = 4;
    cout << itrativeFactorial(number) << endl;
    cout << recursiveFactorial(number) << endl;

    return 0;
}