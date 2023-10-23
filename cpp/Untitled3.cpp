#include <iostream>
#include <vector>

#include <string>

#include <algorithm>



using namespace std;



class OnlineShop {
private:

    string shopName;

    vector<string> productCatalog;

    vector<float> prices;



public:

    OnlineShop(const string& name) : shopName(name) {}
    void addProduct(const string& product, float price) {

        productCatalog.push_back(product);

        prices.push_back(price);

    }

  void searchProduct(const string& product) {

        int index = -1;

        for (int i = 0; i < productCatalog.size(); ++i) {

            if (productCatalog[i] == product) {

                index = i;

                break;

            }
       }



        if (index != -1) {

            cout << "Product found: " << product << "; Price: " << prices[index] << endl;

        } else {

            cout << "Product not found." << endl;

        }

    }  void displayProducts() {

        cout << "Available products:" << endl;

        for (int i = 0; i < productCatalog.size(); ++i) {

            cout << productCatalog[i] << " " << prices[i] << endl;

        }

    }

};int main() {

    string shopName;

    cin.ignore(); // Ignore the newline character

    getline(cin, shopName);

    int catalogSize;

    cin >> catalogSize;

  OnlineShop shop(shopName);



    for (int i = 0; i < catalogSize; ++i) {

        string productName;

        float price;

        cin.ignore(); // Ignore the newline character

        getline(cin, productName);   cin >> price;

        shop.addProduct(productName, price);

    }



    cin.ignore(); // Ignore the newline character

    string searchProduct;

    getline(cin, searchProduct);
      shop.searchProduct(searchProduct);

    shop.displayProducts();



    return 0;

}



