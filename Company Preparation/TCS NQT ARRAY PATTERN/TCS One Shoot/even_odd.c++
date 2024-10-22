/*
Check Even and Odd.
Input : 5
Output : odd
*/

#include<iostream>
using namespace std;

bool checkTheNumber(int n)
{
    if(n%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    
    if(checkTheNumber(n))
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
    return 0;
}