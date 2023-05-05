#include "Shop.h"
#include <iostream>

using namespace std;

Shop::Shop(string shopName, vector<Product> shopProducts) {
	name = shopName;
	products = shopProducts;
}

Shop::Shop(string shopName) {
	name = name;
}

void Shop::addNewProduct(Product product) {
	products.push_back(product);
	cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
	cout << "Product added:" << endl;
	product.printProductInfo(); 
	cout << "Total of products after insert " << to_string(products.size()) <<endl;
	cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
}

void Shop::addNewSale(Sale sale) {
	sales.push_back(sale);
}

string Shop::getName() {
	return name;
}

vector<Product> Shop::getProducts() {
	return products;
}

vector<Sale> Shop::getSales() {
	return sales;
}

void Shop::showProduct(Product productToShow) {
	vector<Product> existingProducts = products;
	for (int i = 0; i < existingProducts.size(); i++) {
		if (existingProducts.at(i).getId() == productToShow.getId()) {
			existingProducts.at(i).printProductInfo();
			break;
		}
	}
}

void Shop::getProductsInfo() {
	vector<Product> existingProducts = products;
	cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
	cout << "Total of products: " << to_string(existingProducts.size()) <<endl;
	for (int i = 0; i < existingProducts.size(); i++) {
		if (existingProducts.size() == 0) {
			cout << "__NO PRODUCTS AVAILABLE__" << endl;
			break;
		}
		existingProducts.at(i).printProductInfo();
	}
}

void Shop::addBatchToProduct(int productId, Batch batchToAdd) {
	products.at(productId).addBatch(batchToAdd);
}