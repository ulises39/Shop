#include <iostream>
#include <string>
#include <vector>
#include "Shop.h"

void main_menu(string name)
{
    cout << "Farmacia " << name << endl;
    cout << "Main Menu" << endl;
    cout << "1.- Add product" << endl;
    cout << "2.- Edit product (new)" << endl;
    cout << "3.- Add sale (TBD)" << endl;
    cout << "4.- Reports" << endl;
    cout << "5.- Show products" << endl;
    cout << "10.- Exit" << endl;
    cout << "\nInput your option: ";
}

bool get_yes_no_answer(string message)
{
    bool loop_control = false;
    bool response_logic;
    char response;

    cout << message;

    while (loop_control == false) {
        cin >> response;
        if (response == 'y' || response == 'Y')
        {
            response_logic = true;
            loop_control = true;
        }
        else if (response == 'n' || response == 'N')
        {
            response_logic = false;
            loop_control = true;
        }
        else {
            cout << "Input a correct option (Y/N): ";
        }
    }

    return response_logic;
}

void show_products(Shop t) {
    cout << "______________________" << endl;
    cout << "Farmacia " << t.getName() << endl;
    cout << "Available products" << endl;
    t.getProductsInfo();
    cout << endl << "______________________" << endl;
}

void add_product(Shop &t)
{
    cout << "Farmacia " << t.getName() << endl;
    cout << "Add product" << endl;

    int idForProduct = t.getProducts().size() + 1;
    bool name_in_db = true;
    bool name_exist = false;
    string name;

    cout << "Input the name of the product: ";
    while (name_in_db) {
        getline(cin, name);
        for (int i = 0; i < t.getProducts().size(); i++)
        {
            if (name == t.getProducts().at(i).getName()) {
                name_exist = true;
                break;
            }
        }

        if (name_exist)
        {
            cout << "Name already in db. Input a new name for the product: ";
        }
        else {
            name_in_db = false;
        }
    }

    string nameForProduct = name;
    bool newProductHasTaxes = get_yes_no_answer("Does the product have IVA? (Y/N): ");

    Product temporal(
        idForProduct,
        nameForProduct,
        newProductHasTaxes
    );

    t.addNewProduct(temporal);
}

void add_presentation(Shop &t)
{
    show_products(t);
    int productId, stock;
    string SKU, laboratory, presentation, expiration_date;
    float cost_value, price_value;

    cout << "\nInput the product Id: ";
    cin >> productId;
    productId -= 1;
    if (productId >= 0 && productId < t.getProducts().size())
    {
        cout << "Input the SKU of the Batch: ";
        cin >> SKU;
        cout << "Input the laboratory of the Batch: ";
        cin.ignore();
        getline(cin, laboratory);
        cout << "Input the presentation of the Batch: ";
        cin >> presentation;
        cout << "Input the cost of the Batch: ";
        cin >> cost_value;
        cout << "Input the sale price of the Batch: ";
        cin >> price_value;
        cout << "Input the experation date of the Batch: ";
        cin >> expiration_date;
        cout << "Input the stock of the Batch: ";
        cin >> stock;

        Batch temporalBatch(
            SKU,
            laboratory,
            presentation, 
            cost_value, 
            price_value,
            expiration_date,
            stock
        );

        t.addBatchToProduct(productId, temporalBatch);
    }
}

int main()
{
    Shop sanPablo("San Pablo");
    bool program_running = true;

    while (program_running)
    {
        int option;
        main_menu(sanPablo.getName());
        cin >> option;
        cin.ignore();
        switch (option)
        {
        case 1: // Add Product
            add_product(sanPablo);
            break;
        case 2: // Edit Product
            add_presentation(sanPablo);
            break;
        case 3: // Add Sale
            //sanPablo = add_product(sanPablo, sale_id);
            //sale_id += 1;
            break;
        case 4: // Reports
            //reports_menu(sanPablo);
            break;
        case 5: // Show products
            show_products(sanPablo);
            break;

        case 10: // Exit
            program_running = false;
        default:
            break;
        }

    }

    cout << "\nGood bye!" << endl;

    return 0;
}