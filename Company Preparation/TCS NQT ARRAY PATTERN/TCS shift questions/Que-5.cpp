/*
Given integer value we need to find the sum of the table of the integer. 

Expl-1
input: 10
output : 550
*/


#include<iostream>
using namespace std;

int tableSum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=n*i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the values: ";
    cin>>n;
    cout<<"The sum is: "<<tableSum(n);
    return 0;
}