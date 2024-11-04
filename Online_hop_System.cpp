#include "Order.h"


int main()
{

	// Create products
	Product product_1(1, "Notepad", 6.3);
	Product product_2(2, "Pencil", 3.3);
	Product product_3(3, "Bag", 50.2);
	Product product_4(4, "Book", 10.3);


	// Create an order
	Order order_1(1, "Christina");

	// Add products to the order
	order_1.addProduct(product_3);
	order_1.addProduct(product_4);
	order_1.addProduct(product_2);


	// Calculate the order total
	double total = order_1.calculateOrderTotal();

	// Display the order details
	cout << "Order ID: " << order_1.getOrderID() << endl;
	cout << "Customer Name: " << order_1.getCustomerName() << endl;
	cout << "Ordered Products: " << endl;

	for (int i = 0; i < order_1.getOrderedProducts().size(); ++i) {
		cout << "  " << i + 1 << ". " << order_1.getOrderedProducts()[i].getProductName() << endl;
	}
	
	cout << "Total: " << total << "$" << endl;

	return 0;

}