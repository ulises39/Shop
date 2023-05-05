#include "SoldProduct.h"
#include "Product.h"

SoldProduct::SoldProduct(Product soldProduct, int quantity) 
	: product(	soldProduct.getId(), 
				soldProduct.getName(), 
				soldProduct.getBatches(), 
				soldProduct.hasTaxes())
{
	product = soldProduct;
	qty_sold = quantity;
}

Product SoldProduct::getProduct() {
	return product;
}

int SoldProduct::getQuantitySold() {
	return qty_sold;
}