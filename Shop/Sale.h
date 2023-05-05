#ifndef SALE_H_
#define SALE_H_

#include <string>
#include <vector>
#include "SoldProduct.h"

using namespace std;

enum TypeOfPayment {
    CASH,
    DEBIT_CARD,
    CREDIT_CARD,
};

class Sale
{
	private:
        int id;
        string date;
        vector<SoldProduct> soldProducts;
        float subtotal;
        float taxes_total;
        float total;
        TypeOfPayment type_payment;
        bool billed;

    public:
        Sale(int, string, vector<SoldProduct>, float, float, TypeOfPayment, bool);

        int getId();
        string getDate();
        vector<SoldProduct> getProducts();

        float getSubtotal();
        float getTaxesTotal();
        float getTotal();
        TypeOfPayment getTypeofPayment();
        bool isSaleBilled();
};

#endif