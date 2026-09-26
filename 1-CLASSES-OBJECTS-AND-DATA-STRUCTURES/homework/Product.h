#include <iostream>
#include <string>

using namespace std;

class Product {
    private:
    int productID;
    string productName;
    float productPrice;

    public:
    // Constructor
    Product(int id, string name, float price) {
        productID = id;
        productName = name;
        productPrice = price;
    }

    // Setters
    void setID(int id) {
        productID = id;
    }

    void setName(const string& name) {
        productName = name;
    }

    void setPrice(float price) {
        productPrice = price;
    }

    // Getters
    int getID() const {
        return productID;
    }

    string getName() const {
        return productName;
    }

    float getPrice() const {
        return productPrice;
    }

};