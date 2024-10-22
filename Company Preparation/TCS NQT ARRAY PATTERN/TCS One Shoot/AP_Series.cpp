/*

Arithmetic Progression
Input :
n=4
a=2
d=2
Output :
20

Sn = n/2 [ 2a + (n-1)d ]

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ArithmeticProgrssion(int n,int a,int b)
{
    int sum = (n/2) * (2 * a + (n-1) * b);
    return sum;
}

int main()
{
    int n,a,b;
    cout<<"Enter the value: ";
    cin>>n;
    cout<<"Enter the first term: ";
    cin>>a;
    cout<<"Enter the second term: ";
    cin>>b;
    cout<<"The Arithmetic Progression is: "<<ArithmeticProgrssion(n,a,b)<<endl;
    return 0;
}