/*
Move Hash at the Front of the string.

Input : Move#Hash#To#Front .
Output : ###MoveHashToFront .

Example

*/

/* Approach - 1. */
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


string MoveHashFront(string s, int cnt)
{
    string str="";
    while(cnt!=0)
    {
        str.push_back('#');
        cnt--;
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='#')
        {
            str.push_back(s[i]);
        }        
    }    
    return str;
}

int countHash(string s)
{
    int cnt=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='#')
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    int cnt = countHash(s);
    cout<<"The Hash Moved to the front: "<<MoveHashFront(s,cnt);

    return 0;
}
*/


#include<iostream>
#include<string>
using namespace std;

void MoveHashFront(string s)
{
    string hash = "";
    string rem = "";

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '#')  // corrected comparison and variable name
        {
            hash.push_back(s[i]);
        }
        else
        {
            rem.push_back(s[i]);
        }
    }

    string str = hash + rem;  // concatenating strings
    cout << "The string with Hash at Front is: " << str << endl;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    MoveHashFront(s);  // no need to print here, function already prints the result
    return 0;
}
