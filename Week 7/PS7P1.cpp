//Allow any number of users to enter a quantity and price at the keyboard (use ctl+z to stop).
//Compute the extended price(quantity times price).If quantity is over 1000 give a 10 % discount.
//Display quantity, price and extended, discount amount and discounted price for each entry.
//Keep a sum of the total for all the discounted prices.Display the total of discounted prices after
//all entries have been entered

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int quantity;
	double price;
	double extendedprice;
	double discount;
	double discountedprice;
	double totaldiscountedprice = 0.0;
	cout << "Enter quantity and price (use Ctrl+Z + Enter to stop): " << endl;
	while (cin >> quantity >> price) {
		extendedprice = quantity * price;
		if (quantity > 1000) {
			discount = extendedprice * 0.10;
		} else {
			discount = 0.0;
		}
		discountedprice = extendedprice - discount;
		totaldiscountedprice += discountedprice;
		cout << fixed << setprecision(2);
		cout << "Quantity: " << quantity << ", Price: $" << price
			 << ", Extended Price: $" << extendedprice
			 << ", Discount: $" << discount
			 << ", Discounted Price: $" << discountedprice << endl;
		cout << "Enter quantity and price (use Ctrl+Z + Enter to stop): " << endl;
	}
	cout << fixed << setprecision(2);
	cout << "Total of discounted prices: $" << totaldiscountedprice << endl;
	return 0;
}