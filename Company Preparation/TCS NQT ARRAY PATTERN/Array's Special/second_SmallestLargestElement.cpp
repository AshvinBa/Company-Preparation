#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int Second_LargestElement(int a[], int n){
    int largest = INT16_MIN;
    int SecondLargest = INT16_MIN;
    int i = 0;

    for (; i < n; i++){
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    for(i=0;i<n;i++){
        if (a[i] != largest && a[i] > SecondLargest)
        {
            SecondLargest = a[i];
        }
    }
    return (SecondLargest != -INFINITY) ? SecondLargest : -1;
}

int Second_SmallestElement(int a[], int n){
    int smallest = INT16_MAX;
    int SecondSmallest;
    int i = 0;
    for (; i < n; i++){
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    for(i=0;i<n;i++){
        if (a[i] > smallest && a[i] < SecondSmallest)
        {
            SecondSmallest = a[i];
        }
    }
    return (SecondSmallest != -INFINITY) ? SecondSmallest : -1;
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int a[n];
    cout << "Enter the values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int Largest = Second_LargestElement(a, n);
    int Smallest = Second_SmallestElement(a, n);
    cout << "\nThe Largest Element is: " << Largest;
    cout << "\nThe Smallest Element is: " << Smallest;
    return 0;
}