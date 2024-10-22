/*
Calculate the total shipping cost.

1. Base money: $5.00
2. Cost Per Kilogram: $2.00
3. Cost per 10 Kilometer: $0.50

*/

#include<iostream>
using namespace std;

int ShippingCost(int w,int d)
{
    double Base_Money = 5;
    double Cost_per_Kg = 2;
    double Cost_per_10_Distance = 0.50;

    double weight_cost = w * Cost_per_Kg;
    double distance_cost = (d/10) * Cost_per_10_Distance;

    double Shipping_Cost = Base_Money + weight_cost + distance_cost;

    return Shipping_Cost;
}

int main()
{
    int w=0,d=0;
    cout<<"Enter the Weight: ";
    cin>>w;
    cout<<"Enter the Distance: ";
    cin>>d;
    int sc=ShippingCost(w,d);
    cout<<"The Shipping Cost is: "<<sc<<endl;
    return 0;
}