#ifndef SHOP_H_
#define SHOP_H_

#include <string>
#include <vector>
#include "Product.h"
#include "Sale.h"

using namespace std;

class Shop
{
	private:
		string name;
		vector<Product> products;
		vector<Sale> sales;

	public:
		Shop(string, vector<Product>); 
		Shop(string);

		// Métodos generales
		void addNewProduct(Product);
		void addNewSale(Sale);

		//Getters 
		string getName();
		vector<Product> getProducts();
		vector<Sale> getSales();
		void showProduct(Product);
		void getProductsInfo();

		void editProduct(int);
		void addBatchToProduct(int, Batch);
};

#endif