/*

Given the two number ,find the sum of the cube of the number between range.

Example-1) 
Input: 
1 2
Output: 
9

Example-2) 
Input: 
4 9
Output: 
1989

*/

#include<math.h>
#include<iostream>
using namespace std;

long long CubeOfRange(int i,int j)
{
    long long cubsum=0;
    long long cube=0;

    for(int k=i;k<=j;k++)
    {
        cube=k*k*k;
        cubsum = cubsum + cube;
    }
    return cubsum;
}

int main()
{
    int i,j;
    cout<<"Enter the Range Valaues: "<<endl;
    cin>>i>>j;
    cout<<"Answer: "<<CubeOfRange(i,j);
    return 0;
}

