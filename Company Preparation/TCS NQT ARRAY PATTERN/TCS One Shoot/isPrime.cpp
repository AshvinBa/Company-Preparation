/*Check whether the number is Prime Or Nut.
Input: 5
Output: Yes.
*/

#include<iostream>
#include<math.h>
using namespace std;

bool Check_Prime(int n)
{
    if(n==0 || n==1)
    return false;

    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    if(Check_Prime(n))
    {
        cout<<"Prime.";
    }
    else
    {
        cout<<"Not Prime.";
    }
    return 0;
}