#ifndef SOLDPRODUCT_H_
#define SOLDPRODUCT_H_

#include <string>
#include "Product.h"

using namespace std;

class SoldProduct
{
	private:
        Product product;
        int qty_sold;

    public:
        SoldProduct(Product, int);

        Product getProduct();
        int getQuantitySold();
};

#endif