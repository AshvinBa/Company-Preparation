#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string RemoveVowel(string str)
{
    string ans="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            continue;
        }
        else if(str[i]==' ')
        { 
            ans+=" ";
        }
        ans+=str[i];
    }
    return ans;
}

int main()
{
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<"The answer is: "<<RemoveVowel(str);
    return 0;
}