#include <iostream>
#include <fstream>
using namespace std;

class Operation {
public:
    int n;

    void fun() {
        const char* fileName = "file1.txt";

        ofstream outFile(fileName);
        cin >> n;

        if (n < 3 || n > 1000) {
            cout << "Invalid input!" << endl;
            exit(0);
        }

        for (int i = 3; i <= n; i += 3) {
            outFile << i << " ";
        }

        outFile.close();

        ifstream inFile(fileName);
        if (inFile.is_open()) {
            int num;
            while (inFile >> num) {
                cout << num << " ";
            }
            cout << endl;
            inFile.close();
        }
    }
};

int main() {
    Operation d;
    d.fun();
    return 0;
}

