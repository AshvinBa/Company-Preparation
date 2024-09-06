#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int findRepeatedChar1(string s1,string s2)
{
    int cnt=0;

    for(int i=0;i<s2.length();i++)
    {
        for(int j=0;j<s1.length();j++)
        {
            if(s2[i]==s1[j])
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int findRepeatedChar2(string s1,string s2)
{
    int sum=0;
    unordered_map<int,int>mp;
    for(int i=0;i<s1.length();i++)
    {
        mp[s1[i]]++;
    }

    for(int i=0;i<s2.length();i++)
    {
        sum+=mp[s2[i]];
    }
    return sum;
}

int main()
{
    string s1="developer";
    string s2="dev";
    cout<<"The Element Repeated are: "<<findRepeatedChar1(s1,s2)<<endl;
    cout<<"The Element Repeated are: "<<findRepeatedChar2(s1,s2)<<endl;
    return 0;
}