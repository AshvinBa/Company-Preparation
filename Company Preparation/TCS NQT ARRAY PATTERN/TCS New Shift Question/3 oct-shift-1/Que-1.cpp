/*
Questions- 
Find the all palindrom number between range.
Input:
A=100 B=150
Output: [101,111]

Input:
A=11 B=20
Output: [11]
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
bool checkPalindrom(int digit)
{
    int temp=digit;
    int num=0;
    int val=1;

    while(digit!=0)
    {
        int rem=digit%10;
        num= num * 10 + rem;
        digit=digit/10;        
    }
    
    if(temp==num)
    {
        return true;
    }
    else
    {
        return false;
    }
}
*/

bool checkPalindrome(int digit)
{
    int temp = digit;  // store original number
    int num = 0;       // reversed number

    // Reverse the digits of the number
    while(digit != 0)
    {
        int rem = digit % 10;
        num = num * 10 + rem;  // building the reversed number
        digit = digit / 10;
    }

    // Check if original number and reversed number are the same
    return temp == num;
}


vector<int> FindPlindromInRange(int a,int b)
{
    vector<int>ans;

    for(int i=a;i<=b;i++)
    {
        if(checkPalindrome(i))
        {
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    int a,b;
    cout<<"Enter the value of A and B: ";
    cin>>a>>b;

    vector<int>ans=FindPlindromInRange(a,b);
    cout<<"The palindrom Number arraay is: ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}