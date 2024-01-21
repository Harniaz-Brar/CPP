#include <vector>

void insertionSort(int n, std::vector<int> &arr) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        // Shift elements greater than temp to the right
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert temp into the correct position
        arr[j + 1] = temp;
    }
}
