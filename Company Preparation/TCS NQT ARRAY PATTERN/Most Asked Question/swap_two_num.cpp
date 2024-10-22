/* 
Swap Two Number without using third variable.

Example - 1)
Input: a=10 b=20
Output: a=20  b=10
*/

#include<iostream>
using namespace std;

void swapingNum(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}

int main()
{
    int a=10,b=20;
    cout<<"a = "<<a<<" ,  b = "<<b<<" "<<endl;
    swapingNum(a,b);
    cout<<"The Swapping of the number: ";
    cout<<"a = "<<a<<" ,  b = "<<b<<" "<<endl;
}