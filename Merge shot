#include <iostream>
#include <vector>
#include <iomanip> // for std::setprecision

using namespace std;

void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }

    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int arraySum(const vector<int>& arr) {
    int sum = 0;
    for (int val : arr) {
        sum += val;
    }
    return sum;
}

double findMedian(const vector<int>& arr) {
    int size = arr.size();
    if (size % 2 == 0) {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        return arr[size / 2];
    }
}

int main() {
    int arr_size;
    cout << "Enter the size of the array: ";
    cin >> arr_size;

    vector<int> arr(arr_size);

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < arr_size; i++) {
        cin >> arr[i];
    }

    cout << "Given array is:\n";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << "\n";

    mergeSort(arr, 0, arr_size - 1);

    cout << "Sorted array is:\n";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << "\n";

    int arr_sum = arraySum(arr);
    cout << "Sum of the array elements: " << arr_sum << "\n";

    double median = findMedian(arr);
    cout << "Median of the array: " << fixed << setprecision(2) << median << "\n";

    return 0;
}
