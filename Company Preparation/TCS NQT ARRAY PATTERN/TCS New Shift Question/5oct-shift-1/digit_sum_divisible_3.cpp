/*
Question - You are given digit 123
           Return true if the sum is divisible by 3.

           Input : 123
           Output : True.
*/

#include<iostream>
using namespace std;

bool checkSum(int n)
{
    int sum = 0;

    while(n!=0)
    {
        int digit = n%10;
        sum = sum + digit;
        n = n / 10;
    }
    if( sum % 3 == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout<<"Enter the Digit: ";
    cin>>n;
    if(checkSum(n))
    {
        cout<<"True.";
    }
    else
    {
        cout<<"False.";
    }
    return 0;
}