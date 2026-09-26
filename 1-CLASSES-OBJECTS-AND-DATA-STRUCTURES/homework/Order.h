#include <iostream>
#include "Product.h"
#include <vector>
#include <string>

using namespace std;

class Order {
private:
    int orderID;
    string customerName;
    vector<Product> products;

    public:
    // Constructor
    Order(int orderID, const string& customerName) {
        this->orderID = orderID;
        this->customerName = customerName;
    }

    // Setters
    void setOrderID(int orderID) {
        this->orderID = orderID;
    }

    void setCustomerName(const string& customerName) {
        this->customerName = customerName;
    }

    // Add one product
    void addProduct(const Product& product) {
        products.push_back(product);
    }

    // Getter
    vector<Product> getProducts() const {
        return products;
    }

    int getOrderID() const {
        return orderID;
    }

    string getCustomerName() const {
        return customerName;
    }
};