// program to delete the target value and return the array

#include <iostream>
using namespace std;

int removeElement(int arr[], int n, int target) {
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != target) {
            arr[j] = arr[i];
            j++;
        }
    }

    return j; // New size
}

int main() {
    int arr[] = {3, 2, 2, 3, 4, 2, 5};
    int n = 7;
    int target = 2;

    n = removeElement(arr, n, target);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}