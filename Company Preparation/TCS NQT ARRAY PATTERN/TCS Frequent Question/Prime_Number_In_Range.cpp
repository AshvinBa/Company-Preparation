#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Approach - 1
/*
bool checkPrime(int n)
{
    if(n<=1)
    {
        return false;
    }
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
vector<int> solve(int a,int b)
{
    vector<int>ans;
    for(int i=a;i<=b;i++)
    {
        if(checkPrime(i))
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
    vector<int>ans = solve(a,b);
    cout<<"The Prime Number Between the A and B: ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool checkPrime(int n)
{
    if(n <= 1) // 0 and 1 are not prime numbers
    {
        return false;
    }
    
    // Check divisibility only up to sqrt(n)
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> solve(int a, int b)
{
    vector<int> ans;
    for(int i = a; i <= b; i++)
    {
        if(checkPrime(i))
        {
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    int a, b;
    cout << "Enter the value of A and B: ";
    cin >> a >> b;
    
    vector<int> ans = solve(a, b);
    
    cout << "The Prime Numbers Between A and B: ";
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
