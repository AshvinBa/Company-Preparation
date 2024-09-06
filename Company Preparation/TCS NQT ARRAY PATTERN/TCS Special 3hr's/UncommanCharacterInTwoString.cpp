/*Incomplete*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string UncommanCharacterInTwoString(string s1,string s2,int n1,int n2)
{
    string str="";
    unordered_map<char,bool>mp1;
    unordered_map<char,bool>mp2;

    for(int i=0;i<n1;i++)
    {
        mp1[s1[i]]=true;
    }
    for(int i=0;i<n2;i++)
    {
        if(mp1[s2[i]]!=true)
        {
            str+=s2[i];
        }
        mp2[s2[i]]=true;
    }
    for(int i=0;i<n2;i++)
    {
        if(mp2[s1[i]]!=true)
        {
            str+=s1[i];
        }
    }
    return str;
}

int main()
{
    string s1,s2;
    cout<<"Enter the s1 and s2: ";
    cin>>s1>>s2;
    int n1=s1.length();
    int n2=s2.length();
    cout<<"The Uncomman string is: "<<UncommanCharacterInTwoString(s1,s2,n1,n2);
    return 0;
}