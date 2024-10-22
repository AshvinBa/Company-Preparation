/*

Example - 1)
Input : aabbbccccdddd
Output : a2b3c4d4

*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void frequencyOfCharchter(string str)
{
    map<char,int> mp;

    for(int i=0;i<str.length();i++)
    {
        mp[str[i]]++;
    }

    for(auto s:mp)
    {
        cout<<s.first<<""<<s.second;
    }
}

int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    frequencyOfCharchter(str);
    return 0;
}