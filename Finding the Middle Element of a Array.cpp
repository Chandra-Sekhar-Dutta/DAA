#include <iostream>

using namespace std;

int main() {
    int size;
    cout<<"Enter the size=";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements=\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int *first = &arr[0];
    int *last = &arr[size-1];

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (first == last) {
            cout << "Middle element is=" << *first;
            break;
        } else if (first>last) {
            cout << "Technically there is no middle element";
            break;
        }
        first++;
        last--;
    }
    
    //another approach - this approach minimises the time complexity
    
//    if (size % 2 == 1) {
//        // For odd-sized arrays, there is a single middle element
//        int middleIndex = size / 2;
//        cout << "Middle element is=" << arr[middleIndex] << endl;
//    } else {
//        // For even-sized arrays, there are two middle elements
//        int middleIndex1 = (size - 1) / 2;
//        int middleIndex2 = size / 2;
//        cout << "Technically there is no single middle element. ";
//        cout << "Middle elements are=" << arr[middleIndex1] << " and " << arr[middleIndex2] << endl;
//    }

    return 0;
}

