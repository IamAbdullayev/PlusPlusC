#ifndef ORDER_H
#define ORDER_H


#include "Product.h"
#include <vector>


//Define the "Order" class (Maket, Plan)
class Order {
		private:
			int orderID;
			string customerName;
			vector<Product> orderedProducts;

	public:
			// Constructors
			Order();
			Order(const int& orderID, const string& customerName);

			// Member functions
			void addProduct(const Product& product);
			double calculateOrderTotal();

			// Setters
			void setOrderID(const int& orderID);
			void setCustomerName(const string& customerName);

			// Getters
			const int& getOrderID() const;
			const string& getCustomerName() const;
			const vector<Product>& getOrderedProducts() const;


};





// Implementation the "Order" class
Order::Order() {
	this->orderID = 0;
	this->customerName = "_?_";
}

Order::Order(const int& orderID, const string& customerName) {
	this->orderID = orderID;
	this->customerName = customerName;
}

void Order::addProduct(const Product& product) {
	this->orderedProducts.push_back(product);
}

double Order::calculateOrderTotal() {
	double total = 0;

	for (int i = 0; i < this->orderedProducts.size(); ++i) {
		total += this->orderedProducts[i].getProductPrice();
	}

	return total;
}

void Order::setOrderID(const int& orderID) {
	this->orderID = orderID;
}

void Order::setCustomerName(const string& customerName) {
	this->customerName = customerName;
}

const int& Order::getOrderID() const {
	return orderID;
}

const string& Order::getCustomerName() const {
	return customerName;
}

const vector<Product>& Order::getOrderedProducts() const {
	return orderedProducts;
}





#endif