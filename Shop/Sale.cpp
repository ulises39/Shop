#include "Sale.h"

Sale::Sale(int sale_id, string sale_date, vector<SoldProduct> products, float sale_subtotal, float sale_taxes_total, TypeOfPayment sale_type_payment, bool sale_billed) {
	id = sale_id;
	date = sale_date;
	soldProducts = products;
	subtotal = sale_subtotal;
	taxes_total = sale_taxes_total;
	total = subtotal + taxes_total;
	type_payment = sale_type_payment;
	billed = sale_billed;
}

int Sale::getId() {
	return id;
}

string Sale::getDate() {
	return date;
}

vector<SoldProduct> Sale::getProducts() {
	return soldProducts;
}

float Sale::getSubtotal() {
	return subtotal;
}

float Sale::getTaxesTotal() {
	return taxes_total;
}

float Sale::getTotal() {
	return total;
}

TypeOfPayment Sale::getTypeofPayment() {
	return type_payment;
}

bool Sale::isSaleBilled() {
	return billed;
}