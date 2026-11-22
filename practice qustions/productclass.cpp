#include <iostream>
using namespace std;

class Product
{
private:
    int productID;
    string productName;
    double price;

public:
    Product(int id, string name, double p)
    {
        productID = id;
        productName = name;
        price = p;
    }

    void displayProduct()
    {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Product p1(101, "Laptop", 50000);

    p1.displayProduct();

    return 0;
}