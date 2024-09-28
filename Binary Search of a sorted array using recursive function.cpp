#include <iostream>

using namespace std;

int BinarySearchRecursive(int arr[], int first, int last, int data) {
    while (first <= last) {
        int mid = (first + last) / 2;

        if (data == arr[mid]) {
            cout << "Found at=" << mid;
            return mid;
        } 
        
        else if (data < arr[mid]) {
            return BinarySearchRecursive(arr, first, mid - 1, data);
        } 
        
        else {
            return BinarySearchRecursive(arr, mid + 1, last, data);
        }
    }

    cout << "Not found";
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of the array=";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array (The elements should be sorted)=\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int data;
    cout << "Enter the data to be searched=";
    cin >> data;

    int result = BinarySearchRecursive(arr, 0, size - 1, data);

    return 0;
}

