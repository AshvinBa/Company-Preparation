/*

Check the Digit is Divisible by K, if not divisible then print "Not Divivsible".

Ex-1)
Input: 364
Output : No

Input : 162
Output: Yes.

*/

#include<iostream>
using namespace std;

void CheckDivisibility(int n,int k)
{
    if(100<=n<=999)
    {
        if(n%9==0)
        {
            cout<<"The Digit is Divisible by "<<k<<endl;
        }
        else
        {
            cout<<"The Digit is Not Divisible by "<<k<<endl;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the digit: ";
    cin>>n;
    int k;
    cout<<"Enter the value of K: ";
    cin>>k;
    CheckDivisibility(n,k);
    return 0;
}