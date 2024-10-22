/*
Shraddha Kapoor’s professor suggested that she study hard and prepare 
well for the lesson on seasons. If her professor says month then, she has 
to tell the name of the season corresponding to that month. So write the 
program to get the solution to the above task?

March to May – Spring Season
June to August – Summer Season
September to November – Autumn Season
December to February – Winter Season

Note: The entered month should be in the range of 1 to 12. If the user enters a 
month less than 1 or greater than 12 then the message “Invalid Month Entered”
should get displayed.

Sample Input 1:
Enter month: 6
Sample Output : Spring Season.

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Mont: ";
    cin>>n;

    cout<<"The Season is: ";
    if(n>=1 && n<=3)
    {
        cout<<"Spring Season.";
    }
    else if(n>=4 && n<=6)
    {
        cout<<"Summer Season.";
    }
    else if(n>=7 && n<=9)
    {
        cout<<"Autumn Season.";
    }
    else if(n>=9 && n<=12)
    {
        cout<<"Winter Season.";
    }
    else
    {
        cout<<"Invalid Month Entered.";
    }
    return 0;
}