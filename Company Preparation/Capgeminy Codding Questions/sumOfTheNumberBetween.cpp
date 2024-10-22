/*

Sum of the number between them A and B.

Example - 1)
Input : A=50 B=55
Output : 45

Explaination : (5+0)+(5+1)+(5+2)+(5+3)+(5+4)+(5+5) = 5+6+7+8+9+10 = 45

*/

//Approach - 1)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sumDigit(int i)
{
    int sum = 0;

    while(i!=0)
    {
        int digit = i%10;
        sum = sum + digit;
        i/=10;
    }
    return sum;
}

int sumOfNumber(int a,int b)
{
    int sum = 0;
    for(int i=a;i<=b;i++)
    {
        sum += sumDigit(i);
    }
    return sum;
}

int main()
{
    int a,b;
    cout<<"Enter the value of A and B: ";
    cin>>a>>b;
    cout<<"The Sum of the Number is: "<<sumOfNumber(a,b);
    return 0;
}



// Approach - 2)

// #include<iostream>
// #include<vector>
// using namespace std;

// // Precompute sum of digits for numbers from 0 to 99
// vector<int> digitSum(100);

// void precompute()
// {
//     for (int i = 0; i < 100; ++i)
//     {
//         int num = i;
//         int sum = 0;
//         while (num != 0)
//         {
//             sum += num % 10;
//             num /= 10;
//         }
//         digitSum[i] = sum;
//     }
// }

// // Function to calculate the sum of digits of a number
// int sumDigit(int n)
// {
//     int sum = 0;
//     while (n != 0)
//     {
//         sum += digitSum[n % 100];  // Use precomputed values for last 2 digits
//         n /= 100;  // Move to the next higher part
//     }
//     return sum;
// }

// // Function to calculate the sum of digit sums between a and b
// int sumOfNumber(int a, int b)
// {
//     int totalSum = 0;
//     for (int i = a; i <= b; i++)
//     {
//         totalSum += sumDigit(i);
//     }
//     return totalSum;
// }

// int main()
// {
//     precompute();  // Precompute digit sums for numbers 0 to 99
    
//     int a, b;
//     cout << "Enter the value of A and B: ";
//     cin >> a >> b;

//     cout << "The Sum of the Number is: " << sumOfNumber(a, b) << endl;

//     return 0;
// }
