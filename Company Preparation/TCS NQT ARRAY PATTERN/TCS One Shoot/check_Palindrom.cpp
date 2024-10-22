#include<iostream>
using namespace std;

bool check_Palindrom(int n)
{
    int temp = n;
    int num = 0;

    while(n!=0)
    {
        int digit = n % 10;
        num = (num * 10) + digit;
        n = n / 10;
    }

    if(num == temp)
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
    cout<<"Enter the Value: ";
    cin>>n;
    if(check_Palindrom(n))
    {
        cout<<"Palindrom.";
    }
    else
    {
        cout<<"Not Palindrom.";
    }
    return 0;
}