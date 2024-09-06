#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool CheckAsAnagram1(string str1,string str2)
{
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    int n1,n2;
    n1=str1.length();
    n2=str2.length();
    
    if(n1!=n2)
    {
        return false;
    }

    for(int i=0;i<n1;i++)
    {
        if(str1[i]!=str2[i])
        {
            return false;
        }
    }
    return true;
}

bool CheckAsAnagram2(string str1,string str2)
{
    unordered_map<char,int>mp;

    for(int i=0;i<str1.length();i++)
    {
        mp[str1[i]]++;
    }

    for(int i=0;i<str2.length();i++)
    {
        mp[str2[i]]--;
    }

    for(auto ans:mp)
    {
        if(ans.second == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str1,str2;
    cout<<"Enter the String-1: ";
    cin>>str1;
    cout<<"Enter the String-2: ";
    cin>>str2;
    bool ans1 = CheckAsAnagram1(str1,str2);
    bool ans2 = CheckAsAnagram2(str1,str2);
    if(ans1 || ans2)
    {
        cout<<"Yes Anagram."<<endl;
    }
    else
    {
        cout<<"Not Anagram."<<endl;
    }
    return 0;
}