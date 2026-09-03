#include<iostream>
using namespace std;

inline int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}

inline int power(int base, int exponent)
{
    int result = 1;
    for(int i = 1; i <= exponent; i++)
        result = result * base;
    return result;
}

int main()
{
    int n, base, exponent;

    cout << "Enter number for factorial: ";
    cin >> n;
    cout << "Factorial = " << factorial(n) << endl;

    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << "Power = " << power(base, exponent) << endl;

    return 0;
}
