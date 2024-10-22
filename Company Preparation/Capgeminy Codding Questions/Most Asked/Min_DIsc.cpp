/*
Mayuri buys “N” no of products from a shop. The shop offers a different 
percentage of discount on each item. She wants to know the item that has 
the minimum discount offer, so that she can avoid buying that and save 
money.[Input Format: The first input refers to the no of items; the second 
input is the item name, price and discount percentage separated by 
comma(,)]Assume the minimum discount offer is in the form of Integer.Note: 
There can be more than one product with a minimum discount.
Sample Input 1:
4
mobile,10000,20
shoe,5000,10
watch,6000,15
laptop,35000,5
Sample Output 1:
shoe
PRIME CODING 1:1 MOCK SESSION WWW.PRIMCECODING.IN 1:1 MOCK SESSION 
*/


#include <iostream>
#include <string>
#include <limits>
#include <sstream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number of Products: ";
    cin >> num;
    cin.ignore(); // To ignore the newline character after entering num

    int minDiscount = numeric_limits<int>::max(); // To store the minimum discount
    string minDiscountProduct = ""; // To store the product with minimum discount

    for (int i = 0; i < num; i++)
    {
        string input, prod;
        int price, discount;
        
        // Get the input as a single line
        cout << "Enter the product details (name,price,discount): ";
        getline(cin, input);

        // Use a stringstream to split the input by commas
        stringstream ss(input);
        getline(ss, prod, ',');     // Get the product name
        ss >> price;                // Get the price
        ss.ignore(1);               // Ignore the comma
        ss >> discount;             // Get the discount percentage

        // Check if the current product has a lower discount percentage
        if (discount < minDiscount)
        {
            minDiscount = discount;
            minDiscountProduct = prod;
        }
    }

    cout << "The Minimum Discount Product is: " << minDiscountProduct << endl;
    
    return 0;
}
