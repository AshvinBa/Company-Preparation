/*

The Digit is Good Number if the sum of the digit is divide the number.

*/

#include<iostream>
using namespace std;

int CheckDigit(int n)
{
    int sum = 0;
    int num=n;

    while(num)
    {
        int digit = num % 10;
        sum += digit;
        num/=10;
    }

    if(n%sum==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans=CheckDigit(n);
    if(ans)
    {
        cout<<"Good Number.";
    }
    else
    {
        cout<<"Bad Number.";
    }

    return 0;
}