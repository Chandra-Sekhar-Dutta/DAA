#include <iostream>

using namespace std;

int BinarySearch() {
    int size, first, last, data, mid;
    cout << "Enter the size of the array=";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array (The elements should be sorted)=\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    first = 0;
    last = size - 1;
    mid = (first + last) / 2;

    cout << "Enter the data to be searched=";
    cin >> data;

    while (first <= last) {
        if (data == arr[mid]) {
            cout << "Found at=" << mid;
            return mid;
        } 
        
        else if (data < arr[mid]) {
            last = mid - 1;
        } 
        
        else {
            first = mid + 1;
        }

        mid = (first + last) / 2;
    }

    cout << "Not found";
    return -1;
}

int main() {
    BinarySearch();

    return 0;
}

