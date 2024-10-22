/*
Factorial of the number without any arithmetic operation.
IP: 5
OP: 120
*/
#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = n;

    for (int i = n-1; i > 0; i--)
    {
        int sum = 0;

        for (int j = 0; j < i; j++)
        {
            sum += ans;
        }
        ans = sum;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the values: ";
    cin >> n;
    cout << "The Factorial of the Number: " << factorial(n);
    return 0;
}