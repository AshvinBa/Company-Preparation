/*
Print the element is divisible by 3 then Three and if '5' then Five
if the digit is divisivle by three and Five then pribt ThreeFive.

Exmple-1
N=4;
arr[]={1,2,3,4,5}
output: 1,2,Three,4,Five

Example-2
N=4
arr[]={12,13,14,15}
output: Three, 13, 14 ,ThreeFive 
*/

#include<iostream>
using namespace std;
void checkDivisibility(int arr[],int n)
{
    cout<<"\n[";
    for(int i=0;i<n;i++)
    {
        if(arr[i]%3==0 && arr[i]%5==0)
        {
            cout<<" ThreeFive ";
        }
        else if(arr[i]%3==0)
        {
            cout<<" Three ";
        }
        else if(arr[i]%5==0)
        {
            cout<<" Five ";
        }
        else
        {
            cout<<" "<<arr[i]<<" ";
        }
    }
    cout<<" ]";

}

int main()
{
    int n;
    cout<<"Entre the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the eolements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    checkDivisibility(arr,n);
    return 0;
}