/* Index of the Occurence of the Character.*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void IndexOfOccurence(string str,int n,char ch)
{
    int Max_index=INT16_MIN;
    int Min_index=INT16_MAX;

    for(int i=0;i<n;i++)
    {
        if(str[i]==ch)
        {
            Max_index=max(Max_index,i);
            Min_index=min(Min_index,i);
        }
    }
    cout<<Min_index<<","<<Max_index<<endl;
}

int main()
{
    string str;
    cout<<"Enter the String: ";
    cin>>str;
    char ch;
    cout<<"Enter the character to find: ";
    cin>>ch;
    int n = str.length();
    IndexOfOccurence(str,n,ch);
    return 0;
}