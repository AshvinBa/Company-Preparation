/*
DealerShip Questions.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dealership(int car , int bike)
{
    int TyreOfCar = 4 * car;
    int TyreOfBike = 2 * bike;
    int dealership = TyreOfBike + TyreOfCar;
    cout<<"The Dealership contain "<<car<<" cars and "<<bike<< " bike "<<"and dealership is: "<< dealership <<endl;
}

int main()
{
    int car,bike;
    cout<<"Enter the Number of Cars: ";
    cin>>car;
    cout<<"Enter the Number of Bikes: ";
    cin>>bike;
    dealership(car,bike);
    return 0;
}