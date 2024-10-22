/*
Check if The number is Harshed Number.
Input : 378
Output : Yes the number is Harshed Number.

Explaination : 3+7+8=18 the 378 is divisible by 18 , so the number is Harsh Number.
*/

#include<bits/stdc++.h>
using namespace std;

bool IsHarshedDigit(int n)
{
    int temp = n;
    int cnt = 0;

    while(n!=0)
    {
        int rem = n%10;
        cnt += rem;
        n = n / 10;
    }

    if( ( temp % cnt ) == 0)
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
    cout<<"Enter the number: ";
    cin>>n;

    if(IsHarshedDigit(n))
    {
        cout<<"The Number is Harshed.";
    }
    else
    {
        cout<<"The Number is Not Harshed.";
    }
    return 0;
}