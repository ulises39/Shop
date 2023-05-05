#include "Product.h"
#include <iostream>

using namespace std;

Product::Product(int cid, string cname, vector<Batch> cBatches, bool ctax) {
	id = id;
	name = name;
	Batches = Batches;
	tax = tax;
}

Product::Product(int ID, string Name, bool Tax) {
	id = ID;
	name = Name;
	tax = Tax;
}

int Product::getId() {
	return id;
}

string Product::getName() {
	return name;
}

void Product::setName(string newName) {
	name = newName;
}

vector<Batch> Product::getBatches() {
	return Batches;
}

void Product::addBatch(Batch newBatch) {
	Batches.push_back(newBatch);
}

void Product::deleteBatch(Batch batchToDelete) {
	//Batches. Tobedefined
}

bool Product::hasTaxes() {
	return tax;
}

void Product::printProductInfo() {
	cout << "-------------------------------------" << endl;
	cout << "Product Id    " << to_string(getId()) << endl;
	cout << "Product Name  " << name << endl;
	vector<Batch> batches = getBatches();
	for (int i = 0; i < batches.size() ; i++) {
		if (batches.size() == 0) {
			cout << "__PRODUCT WITHOUT BADGES__" << endl;
			break;
		}
		batches.at(i).printBatchInfo();
	}
	cout << "-------------------------------------" << endl;
}