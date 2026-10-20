#pragma once
#include <iostream>
#include <string>

using namespace std;

class Product {
    private:
    int ProductID;
    string ProductName;
    float ProductPrice;

    public:
    // Constructor
    Product(int id, string name, float price) {
        ProductID = id;
        ProductName = name;
        ProductPrice = price;
    }

    // Setters
    void setID(int id) {
        ProductID = id;
    }

    void setName(const string& name) {
        ProductName = name;
    }

    void setPrice(float price) {
        ProductPrice = price;
    }

    // Getters
    int getID() const {
        return ProductID;
    }

    string getProductName() const {
        return ProductName;
    }

    float getPrice() const {
        return ProductPrice;
    }

};