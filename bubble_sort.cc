#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {5, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted array: ";
    for (int &i : arr) {
        cout << i << " ";
    }
    bubbleSort(arr, N);
    cout << "\nSorted array: ";
    for (int &i : arr) {
        cout << i << " ";
    }
    return 0;
}
