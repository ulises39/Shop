#ifndef BATCH_H_
#define BATCH_H_

#include <string>

using namespace std;

class Batch
{
	private:
        string SKU;
        string laboratory;
        string presentation;
        float cost_value;
        float price_value;
        string expiration_date;
        int stock;

    public:
        Batch(string, string, string, float, float, string, int);

        string getSKU();
        void setSKU(string);

        string getLaboratory();
        void setLaboratory(string);

        string getPresentation();
        void setPresentation(string);

        float getCostValue();
        void setCostValue(float);

        float getPriceValue();
        void setPriceValue(float);

        string getExpirationDate();
        void setExpirationDate(string);

        int getStock();
        void setStock(int);
        void addToStock(int);
        void reduceStock(int);

        void printBatchInfo();
        
};

#endif // !