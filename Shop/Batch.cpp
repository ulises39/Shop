#include "Batch.h"
#include <iostream>

Batch::Batch(
		string Sku, 
		string Laboratory, 
		string Presentation, 
		float Cost_value, 
		float Price_value, 
		string Expiration_date, 
		int Stock) 
{
	SKU = Sku;
	laboratory = Laboratory;
	presentation = Presentation;
	cost_value = Cost_value;
	price_value = Price_value;
	expiration_date = Expiration_date;
	stock = Stock;
}

string Batch::getSKU() {
	return SKU;
}

void Batch::setSKU(string newSKU) {
	SKU = newSKU;
}

string Batch::getLaboratory() {
	return laboratory;
}

void Batch::setLaboratory(string newLab) {
	laboratory = newLab;
}

string Batch::getPresentation() {
	return presentation;
}

void Batch::setPresentation(string newPresentation) {
	presentation = newPresentation;
}

float Batch::getCostValue() {
	return cost_value;
}

void Batch::setCostValue(float newCostValue) {
	cost_value = newCostValue;
}

float Batch::getPriceValue() {
	return price_value;
}

void Batch::setPriceValue(float newPriceValue) {
	price_value = newPriceValue;
}

string Batch::getExpirationDate() {
	return expiration_date;
}

void Batch::setExpirationDate(string newExpirationDate) {
	expiration_date = newExpirationDate;
}

int Batch::getStock() {
	return stock;
}

void Batch::setStock(int newStock) {
	stock = newStock;
}

void Batch::addToStock(int stockToAdd) {
	stock += stockToAdd;
}

void Batch::reduceStock(int stockToReduce) {
	stock -= stockToReduce;
}

void Batch::printBatchInfo() {
	cout << "\tSKU          " << getSKU() << endl;
	cout << "\tPrice        " << to_string(getPriceValue()) << endl;
	cout << "\tStock        " << to_string(getStock()) << endl;
	cout << "\tPresentation " << getPresentation() << endl;
	cout << "\tLaboratory   " << getLaboratory() << endl;
	cout << "\tExp. Date    " << getExpirationDate() << endl;
}