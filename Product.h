#ifndef PRODUCT_H
#define PRODUCT_H


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <math.h>
#include <sstream>
#include <string>
using namespace std;

// Define the "Product" class (Maket, Plan)
class Product {
	private:
			int productID;
			string productName;
			double productPrice;

	public:
			// Constructors
			Product();
			Product(const int& productID, const string& productName, const double& productPrice);

			// Setters
			void setProductID(const int&);
			void setProductName(const string&);
			void setProductPrice(const double&);

			// Getters
			int getProductID() const;
			string getProductName() const;
			double getProductPrice() const;

};





// Implementation the "Product" class
Product::Product(){
	this->productID = 0;
	this->productName = "_?_";
	this->productPrice = 0.0;
}

Product::Product(const int& productID, const string& productName, const double& productPrice) {
	this->productID = productID;
	this->productName = productName;
	this->productPrice = productPrice;
}

void Product::setProductID(const int& productID) {
	this->productID = productID;
}

void Product::setProductName(const string& productName) {
	this->productName = productName;
}

void Product::setProductPrice(const double& productPrice) {
	this->productPrice = productPrice;
}

int Product::getProductID() const {
	return productID;
}

string Product::getProductName() const {
	return productName;
}

double Product::getProductPrice() const {
	return productPrice;
}


#endif