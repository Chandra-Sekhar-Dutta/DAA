#include <iostream>

using namespace std;

void Insertion_Sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main() {
    int size;
    cout << "Enter the size=";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    Insertion_Sort(arr, size);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// eg-

// array=[5 4 10 1 6 2]
// index= 0 1 2  3 4 5

// i=1(loop starts from arr[1] and ends in arr[size])
// arr[1]=4->temp=arr[1]=4
// j=arr[i-1]

// while loop only works when j>=0 and arr[j]>j
// at that time, swapping of arr[j] with arr[j+1] occurs(j+1 is equal to i but the value of i is not lost as it is stored in the temp)
// j--

// when the condition of the while loop is false, then arr[j+1]=i=temp and i increments

// in the above example, 5>4 therefore unsorted, that means-
// temp=4 and j=0
// arr[j]=5
// now j>=0 and arr[j]>temp
// =>arr[j+1]=arr[1] stores the value of arr[0]=>arr[1]=5( 4 was in the place of arr[1] but it is not lost as it was stored in temp)
// j--=>j=-1=>j no more satisfies the condition of while loop
// that means it comes out of the while loop and arr[j+1]=temp=>arr[-1+1]=4=>arr[0]=4 and from the first statement of while loop, we get arr[1]=5
// therefore 4<5 and i++

// let i=2
// arr[2]=10
// 10>4
// temp=arr[2]=>temp=10
// j=i-1=>j=1
// since temp>arr[j], while loop will not be functional
// arr[j+1]=temp=>arr[2]=10

// let i=3
// arr[3]=1=>temp=arr[i]=>temp=1
// j=i-1=>j=2=>arr[j]=10
// here arr[j]>arr[i]=>arr[j]>temp and j>=0
// it will enter in the while loop and perform-
//             arr[j + 1] = arr[j]=>arr[3]=arr[2]=>arr[3]=10
//             j--=>j=2-1
//         again it will check for arr[j]>temp and j>=0
// when any of the condition i false, arr[j+1]=1


