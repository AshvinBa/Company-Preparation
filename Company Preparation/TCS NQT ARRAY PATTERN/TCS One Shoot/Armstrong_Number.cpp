/*Armstrong Number.*/
/*
Input : 153
Output: Armstrong Number.
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isArmstrong(long long n)
{
    long long cnt=0;
    long long temp1 = n;
    long long  temp2 = n;

    while(n!=0)
    {
        long long digit = n % 10;
        cnt++;
        n = n/10;
    }

    if(cnt == 3)
    {
        long long ele = 0;
        while(temp2 != 0)
        {
            long long digit = temp2 % 10;
            ele += digit * digit * digit;
            temp2 = temp2 / 10;
        }
        return temp1 == ele;
    }
    else
    {
        long long ele = 0;
        while(temp2 != 0)
        {
            long long digit = temp2 % 10;
            ele += pow(digit , cnt);
            temp2 = temp2 / 10;
        }
        return temp1 == ele;
    }
}

int main()
{
    long long n;
    cout<<"Enter the Number: ";
    cin>>n;
    if(isArmstrong(n))
    {
        cout<<"Armstrong Number.";
    }
    else
    {
        cout<<"Not Armstrong Number.";
    }
    return 0;
}
