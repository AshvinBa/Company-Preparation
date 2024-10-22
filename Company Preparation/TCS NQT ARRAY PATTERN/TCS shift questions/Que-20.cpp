/*
Generate the password atleast 8 character 

1) Contail at least lower symbol.
2) Contail at least upper symbol.
3) Contail at least character symbol.
4) Contail at least digit symbol.
5) Contail at least symbol.

Example - 1)

Input-1: werV432@
Input-2: 2

Output: ygtX653#

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string password(string str,int val)
{
    string res="";
    for(char ch:str)
    {
        if(isalpha(ch))
        {
            if(islower(ch))
            {
                res += ((ch - 'a' + val)%26) + 'a';
            }
            else
            {
                res += ((ch - 'a' + val)%26) + 'A';
            }
        }
        else if(isdigit(ch))
        {
            res += ((ch - '0' + val)%10) + '0';
        }
        else
        {
            if(ch=='@')
            {
                res+='#';
            }
            else
            {
                res+='@';
            }
        }
    }
    return res;
}

int main()
{
    string str;
    int val=0;

    cout<<"Entre the string: ";
    cin>>str;
    cout<<"Entre the values: ";
    cin>>val;

    cout<<"The Password is: "<<password(str,val);
    return 0;
}


