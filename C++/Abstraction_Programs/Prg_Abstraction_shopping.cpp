// Online Shopping Cart:
//Create a C++ program that models an online shopping cart system. Define classes like Product, ShoppingCart, and Customer. Use abstraction to abstract the shopping cart's functionality, such as adding products, calculating the total cost, and processing the checkout.
//In this program:
//The Product class represents products with a name and price.
//The ShoppingCart class allows adding products and calculating the total cost of items in the cart.
//The Customer class has a shopping cart and can add products to it and process the checkout.

#include <iostream>
#include <vector>
#include <string>

// Class to represent a Product
class Product {
private:
    std::string name;
    double price;

public:
    Product(const std::string& productName, double productPrice)
        : name(productName), price(productPrice) {}

    double getPrice() const {
        return price;
    }

    std::string getName() const {
        return name;
    }
};

// Class to represent a ShoppingCart
class ShoppingCart {
private:
    std::vector<Product> items;

public:
    // Add a product to the cart
    void addItem(const Product& product) {
        items.push_back(product);
    }

    // Calculate the total cost of items in the cart
    double calculateTotal() const {
        double total = 0.0;
        for (const Product& item : items) {
            total += item.getPrice();
        }
        return total;
    }

    // Display the contents of the cart
    void displayCart() const {
        std::cout << "Shopping Cart Contents:" << std::endl;
        for (const Product& item : items) {
            std::cout << item.getName() << ": $" << item.getPrice() << std::endl;
        }
    }

    // Clear the cart
    void clearCart() {
        items.clear();
    }
};

// Class to represent a Customer
class Customer {
private:
    ShoppingCart cart;

public:
    // Add a product to the customer's cart
    void addToCart(const Product& product) {
        cart.addItem(product);
    }

    // Process the checkout and display the total cost
    void checkout() {
        double total = cart.calculateTotal();
        std::cout << "Checkout Complete" << std::endl;
        cart.displayCart();
        std::cout << "Total Cost: $" << total << std::endl;
        cart.clearCart();
    }
};

int main() {
    // Create some products
    Product product1("Item 1", 10.0);
    Product product2("Item 2", 15.0);

    // Create a customer
    Customer customer;

    // Add products to the cart
    customer.addToCart(product1);
    customer.addToCart(product2);

    // Process the checkout
    customer.checkout();

    return 0;
}