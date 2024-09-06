#include<iostream>
using namespace std;
#define PI 3.1416

float AreaOfCircle(float d)
{
    float r=d/2;
    float area = r*PI*r;
    return area;
}

int main()
{
    float d;
    cout<<"Entre the Diameter: ";
    cin>>d;
    cout<<"The Area of the circle is: "<<AreaOfCircle(d);
    return 0;
}