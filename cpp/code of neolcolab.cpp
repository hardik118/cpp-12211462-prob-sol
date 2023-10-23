#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) {
        if (arr[i] % 2 != 0 && arr[j] % 2 != 0) {
            if (arr[i] < arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
            }
        } else if (arr[i] % 2 != 0) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        if (arr[i] % 2 != 0) {
            temp[k++] = arr[i++];
        } else {
            i++;
        }
    }

    while (j <= right) {
        if (arr[j] % 2 != 0) {
            temp[k++] = arr[j++];
        } else {
            j++;
        }
    }

    for (int p = 0; p < k; p++) {
        arr[left + p] = temp[p];
    }
}

void merge_sort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void sort_odd_numbers(vector<int>& arr) {
    int n = arr.size();
    vector<int> odd_numbers;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            odd_numbers.push_back(arr[i]);
        }
    }

    if (odd_numbers.empty()) {
        cout << "None";
        return;
    }

    merge_sort(odd_numbers, 0, odd_numbers.size() - 1);

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            arr[i] = odd_numbers[j++];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort_odd_numbers(arr);

    return 0;
}

