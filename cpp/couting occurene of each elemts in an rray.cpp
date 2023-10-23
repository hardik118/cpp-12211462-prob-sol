#include <iostream>

void count(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        bool isPrinted = false; // Flag to track if the element has been printed
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                isPrinted = true;
                break;
            }
        }
        if (!isPrinted) {
            std::cout << "The element " << arr[i] << " occurs " << count << " times" << std::endl;
        }
    }
}

int main() {
    int arr[] = {12, 12, 12, 13, 14, 15, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    count(arr, size);
    return 0;
}


