
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n)
{
    int temp=n,cnt=0;
    int che=n;

    while(n!=0)
    {
        int digit=n%10;
        cnt++;
        n=n/10;
    }


    if(cnt==4)
    {
        int num=0;
        while(temp!=0)
        {
            int digit=temp%10;
            num = num + pow(digit,4);
            temp=temp/10;
        }
        return num==che;
    }
    else
    {
        int num=0;
        while(temp!=0)
        {
            int digit=temp%10;
            num += digit*digit*digit;
            temp=temp/10;
        }
        return num==che;
    }
}

int main()
{
    int n;
    cout<<"Entre the digit: ";
    cin>>n;
    bool check=checkArmstrong(n);
    if(check)
    {
        cout<<"Yes the Number is armstrong.";
    }
    else
    {
        cout<<"Not Armstrong.";
    }
}