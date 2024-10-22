/*
Write a program to take a input of X and Y in a new line
Print the number which is nearer the integer when 
divided by Y

Example - 1
Input: 
X=13
Y=3
Output: 12
*/

#include<iostream>
using namespace std;

int findNearest(int n)
{
    int int_num=n;
    double dec_num=int_num-n;

    if( dec_num > 0.5)
    {
        return int_num+1;
    }
    else
    {
        return int_num;
    }
}

int main()
{
    int x,y;
    cout<<"Enter the value of X and Y: ";
    cin>>x>>y;

    double nearest = x/y;
    cout<<"The Nearest Number is: "<<y*findNearest(nearest);
    return 0;
}