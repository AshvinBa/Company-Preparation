/*

Solve the Equation.
equation = a3+a2b+2a2b+2ab2+ab2+b3



*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solveEquation(int a,int b,int c)
{
    int result = (a*a*a)+(a*a+b)+(2*(a)*2*(b))+(2*(a)*(b*b))+(a*(b*b))+((b*b*b));
    return result;
}

int main()
{
    int a,b,c;
    cout<<"Enter the value of a,b and c: ";
    cin>>a>>b>>c;
    cout<<"The Solution of the equation: "<<solveEquation(a,b,c);
    return 0;
}