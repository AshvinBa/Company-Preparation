/*
You are given a grocery list in which there are Three Paramenter's 1) Item 2) Quantity 3) Price.
Your task is to find,
-> Higher selling Item.
-> Total selling Item.
-> Average Selling Item.

Example- 1)
Input: 
        {"ItemA", 10, 5.5},
        {"ItemB", 15, 3.2},
        {"ItemC", 8, 7.0},
        {"ItemD", 12, 6.5}

Output:

        Higher Selling Pattern: ItemD (because 12 × 6.5 = 78.0, which is the highest sale)
        Total Selling Item: 45 (sum of quantities: 10 + 15 + 8 + 12)
        Average Selling Item: 11.25 (total quantity 45 divided by 4 items).
        
Explaination:

        ItemA with Quantity = 10 and Price = 5.5
        ItemB with Quantity = 15 and Price = 3.2
        ItemC with Quantity = 8 and Price = 7.0
        ItemD with Quantity = 12 and Price = 6.5

*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure to hold item information
struct Item {
    string name;
    int quantity;
    double price;
};

// Function to find the higher selling item (based on total sale)
string findHigherSellingPattern(const vector<Item>& items) {
    double maxSale = 0;
    string maxSellingItem;
    for (const auto& item : items) {
        double totalSale = item.quantity * item.price;
        if (totalSale > maxSale) {
            maxSale = totalSale;
            maxSellingItem = item.name;
        }
    }
    return maxSellingItem;
}

// Function to calculate total quantity sold
int totalSellingItem(const vector<Item>& items) {
    int totalQuantity = 0;
    for (const auto& item : items) {
        totalQuantity += item.quantity;
    }
    return totalQuantity;
}

// Function to calculate average quantity sold per item
double avgSellingItem(const vector<Item>& items) {
    int totalQuantity = totalSellingItem(items);
    return (double)totalQuantity / items.size();
}

int main() {
    // Example data: Item name, quantity sold, and price per item
    vector<Item> items = {
        {"ItemA", 10, 5.5},
        {"ItemB", 15, 3.2},
        {"ItemC", 8, 7.0},
        {"ItemD", 12, 6.5}
    };

    // 1. Find the higher selling pattern (item with max total sale)
    cout << "Higher Selling Pattern: " << findHigherSellingPattern(items) << endl;

    // 2. Calculate total quantity of items sold
    cout << "Total Selling Item: " << totalSellingItem(items) << endl;

    // 3. Calculate average selling item (avg. quantity per item)
    cout << "Average Selling Item: " << avgSellingItem(items) << endl;

    return 0;
}


/*
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    map<string, pair<double, double>> sales; // stores {item -> {total_quantity, total_sales}}
    
    for (int i = 0; i < n; i++) {
        string item;
        double quantity, price;
        cin >> item >> quantity >> price;

        // If item exists, update its quantity and total sales
        if (sales.find(item) != sales.end()) {
            sales[item].first += quantity; // update quantity
            sales[item].second += quantity * price; // update sales
        } else {
            sales[item] = {quantity, quantity * price}; // new entry
        }
    }

    // Variables to track results
    string highest_selling_item;
    double max_sales = 0;
    double total_selling = 0;
    double total_revenue = 0;

    // Find the highest selling item and compute total selling quantity and revenue
    for (auto& sale : sales) {
        string item = sale.first;
        double total_quantity = sale.second.first;
        double total_sales = sale.second.second;

        // Update total selling quantity and revenue
        total_selling += total_quantity;
        total_revenue += total_sales;

        // Check if current item has the highest sales
        if (total_sales > max_sales) {
            max_sales = total_sales;
            highest_selling_item = item;
        }
    }

    // Calculate average selling item
    double avg_selling_item = total_revenue / total_selling;

    // Output the results
    cout << highest_selling_item << endl;
    cout << total_selling << endl;
    cout << total_revenue << endl;

    return 0;
}

*/