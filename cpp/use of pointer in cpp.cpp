#include <iostream>
#include <string>

#include <cmath> // Include the cmath library for rounding

using namespace std;



class Salesperson {

private:

    string name;

    int numMonths;

    int* sales;

public:

    Salesperson() {

        name = "";

        numMonths = 0;

        sales = NULL;

    }



    void input() {

        cin >> name;

        cin >> numMonths;


        sales = new int[numMonths];

        for (int i = 0; i < numMonths; i++) {

            cin >> sales[i];

        }

    }



    int calculateTotalSales() {

        int total = 0;

        for (int i = 0; i < numMonths; i++) {

            total += sales[i];

        } return total;

    }



    double calculateAverageSales() {

        if (numMonths == 0) {

            return 0.0;

        }

        return round(static_cast<double>(calculateTotalSales()) / numMonths); // Round the average

    }

    void display() {

        cout << "Salesperson Details:" << endl;

        cout << "Name: " << name << endl;

        cout << "Total Sales: " << calculateTotalSales() << endl;

        cout << "Average Sales: " << static_cast<int>(calculateAverageSales()) << endl; // Cast to int

    }

  ~Salesperson() {

        delete[] sales;

    }

};



int main() {

    Salesperson salesperson;

    salesperson.input();

    salesperson.display();



    return 0;
}
