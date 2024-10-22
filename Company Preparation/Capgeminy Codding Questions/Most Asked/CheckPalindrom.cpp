// Check for Palindrom.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrom(string str,int n)
{
    int i=0,j=n-1;
    while(i<=j)
    {
        if(str[i++]!=str[j--])
        return false;
    }
    return true;
}

int main()
{
    string str="";
    cout<<"Enter the string: ";
    cin>>str;
    int n=str.length();
    if(checkPalindrom(str,n))
    {
        cout<<"The String is Palindrom.";
    }
    else
    {
        cout<<"The string is Not Palindrom.";
    }
    return 0;
}