#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> SmallestAndLargestDigit(int n)
{
    vector<int>ans;
    int mini=INT16_MAX;
    int maxi=INT16_MIN;
    int num=n;
    
    while(num)
    {
        int digit=num%10;
        mini=min(digit,mini);
        maxi=max(digit,maxi);
        num/=10;
    }
    ans.push_back(maxi);
    ans.push_back(mini);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the Digit: ";
    cin>>n;
    vector<int>ans = SmallestAndLargestDigit(n);
    cout<<"["<<ans[0]<<","<<ans[1]<<"]"<<endl;
    return 0;
}