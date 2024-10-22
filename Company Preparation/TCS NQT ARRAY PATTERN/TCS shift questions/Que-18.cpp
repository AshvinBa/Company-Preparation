/* 
Write the Program that accepts two integer n and m, 
and also print all the prime number between the range 
between n and m also sum of their digit is prime numbers.

Example - 1
input: 20 25
Output: 23
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if( n % i == 0 )
        {
            return false;
        }
    }
    return true;
}

bool seperateNum(int n)
{
    int sum=0;
    while(n!=0)
    {
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    return isPrime(sum); 
}

vector<int> checkPrime(int n,int m)
{
    vector<int>ans;
    if(n==0 && m==1)
    {
        return {-1};
    }    

    for(int i=n;i<=m;i++)
    {
        if(isPrime(i))
        {
            if(seperateNum(i))
            {
                ans.push_back(i);
            }
        }
    }
    return ans;
}

int main()
{
    int m,n;
    cout<<"Enter the values of M and N: ";
    cin>>n>>m;
    vector<int>ans;
    ans = checkPrime(n,m);
    cout<<"The List of Prime Number is: ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}