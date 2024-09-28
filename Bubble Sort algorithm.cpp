#include <iostream>
using namespace std;

void sort() {
    int size;
    cout << "Enter the size=";
    cin >> size;

    int arr[size];

    cout << "Input the values =\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
cout<<"\n";
    int counter = 1;

    while(counter<size) {
        cout << "After the " << counter << " pass of the outer loop: [";

        for (int j = 0; j < size - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                cout << arr[j] << " (swapped " << arr[j + 1] << " and " << arr[j] << "), ";
            } else {
                cout << arr[j] << ", ";
            }
        }

        cout << arr[size - 1] << "] (no swap needed)\n";

        counter++;
    }

    cout << "\n\nThe sorted array=\n[";
    for (int i = 0; i < size - 1; i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[size - 1] << "]\n";
}

int main() {
    sort();
    return 0;
}

//example-
//8 0 -4 4

//counter 1->
//8<->0 -4 4
//0 8<->-4 4
//0 -4 8<->4
//0 -4 4 8

//counter 2->
//0<->-4 4 8
//-4 0 4 8

//counter 3->
//-4 0 4 8

//since counter =2, it will iterate once more as size is 4. So counter =3 but the sorted array remains the same.

