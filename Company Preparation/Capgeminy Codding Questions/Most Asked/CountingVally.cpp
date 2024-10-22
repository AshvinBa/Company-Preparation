/*
Counting Valleys:

Problem: Given a sequence of up and down steps during a hike, determine 
the number of valleys traversed.

Input:
8
UDDDUDUU
Output: 1

Explanation: A valley is a sequence of consecutive steps below sea level. 
The example describes a single valley.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countValleys(string str,int n)
{
    int altitude = 0;
    int valleyCount = 0;

    for(char step : str)
    {
        if(step == 'U')
        {
            altitude++;
        }
        else
        {
            altitude--;
        }

        if(step == 'U' && altitude == 0)
        {
            valleyCount++;
        }
    }
    return valleyCount;
}

int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int n = str.length();
    cout<<"The Counting of the Vally is: "<<countValleys(str,n);
    return 0;
}