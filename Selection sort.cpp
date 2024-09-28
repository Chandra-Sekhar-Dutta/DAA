#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void print_SortedArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
}

void selection_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
    //here the terminating value of i is size-1 because, if i=size, the the value of j will be invalid since j=i+1
    {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[j], arr[i]);
            }
        }
    }
    print_SortedArray(arr,size);
}

int main() {
    int size;
    cout << "Enter the size=";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, size);

    return 0;
}

// eg.- 9 8 7 3 4
// when i=0, j=1
// arr[0]>arr[1]=>swap=>8 9 7 3 4,j++(j=2)
// arr[0]>arr[2]=>swap=>7 9 8 3 4,j++(j=3)
// arr[0]>arr[3]=>swap=>3 9 8 7 4,j++(j=4)
// arr[0]<arr[4]=>no swap=>3 9 8 7 4,loop of j terminates

// i++=>i=1,j=2
// arr[1]>arr[2]=>swap=>3 8 9 7 4,j++(j=3)
// arr[1]>arr[3]=>swap=>3 7 9 8 4,j++(j=4)
// arr[1]>arr[4]=>swap=>3 4 9 8 7,loop of j terminates

// i++=>i=2,j=3
// arr[2]>arr[3]=>swap=>3 4 8 9 7,j++(j=4)
// arr[2]>arr[4]=>swap=>3 4 7 9 8,loop of j terminates

// i++=>i=3(size-1),j=4
// arr[3]>arr[4]=>swap=>3 4 7 8 9,loop of j terminates

