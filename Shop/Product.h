#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <string>
#include <vector>
#include "Batch.h"

using namespace std;

class Product
{
	private:
        int id;
        string name;
        vector<Batch> Batches;
        bool tax;

    public:
        // Constructors
        Product(int, string, vector<Batch>, bool);
        Product(int, string, bool);

        // General methods
        int getId();

        string getName();
        void setName(string);
        
        vector<Batch> getBatches();
        void addBatch(Batch);
        void editBatch(Batch, Batch);
        void deleteBatch(Batch);

        bool hasTaxes();
        void editTaxes(bool);

        void printProductInfo();
        

};

#endif