#include<bits/st dc++.h>
#include<iostream>
using namespace std;

int InsertAtbegining(int arr[],int size,int digit)
{
    if(size==0)
    {
        return arr[0]=digit;
    }
    for(int i=size-1; i >= 0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=digit;
    return 1;

}

int InsertAtPosition(int arr[],int size,int digit,int capacity,int index)
{
    if(size==0)
    {
        return arr[0]=digit;
    }
    if(capacity<=size)
    {
        return -1;
    }
    for(int i=size-1; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=digit;
    return 1;
}

int InsertAtLast(int arr[],int size,int digit)
{
    if(size==0)
    {
        return arr[0]=digit;
    }
    arr[size]=digit;
    return 1;
}

void display(int arr[],int size)
{
    cout<<"The array is: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int arr[100]={1,2,6,78,28,75,69,84,24,13,18};
    // int arr[100];
    int size=0;
    int digit=11;
    int index=5;

    display(arr,size);
    cout<<"\nInsert At any Position: ";
    InsertAtPosition(arr,size,digit,100,index);
    size+=1;
    display(arr,size);
    cout<<"\nInsert At Last Position: ";
    InsertAtLast(arr,size,digit);
    size+=1;
    display(arr,size);
    cout<<"\nInsert At The Begining: ";
    InsertAtbegining(arr,size,digit);
    size+=1;
    display(arr,size);
    return 0; 
}