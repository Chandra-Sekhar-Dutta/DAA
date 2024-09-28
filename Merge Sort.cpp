#include <iostream>
using namespace std;

void CopyFromNewArrToOriginalArr(int NewArr[], int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = NewArr[i];
    }
}

void Merge(int arr[], int start, int end, int mid) {
    // Merging (conquering the subarrays) the array here-

    // New array is created so that the original array is not modified at the beginning of the merging process and
    // later the values of this array will be assigned to the original array.
    int NewArr[end - start + 1];
    int i = start;
    int j = mid + 1; // Here mid can be at any position based on dividing the array into subarrays
    int k = 0;      // This is a tracker variable

    while (i <= mid && j <= end) // Here i is at arr[start] position of the original array and j is at arr[mid+1] of the original array
    {
        if (arr[i] <= arr[j])
        // Here the array/subarray is divided into 2 halves,
        // one half has a range from i to mid and the other half has a range from j=mid+1 to end
        {
            NewArr[k] = arr[i];
            i++;
            k++;
        } else {
            NewArr[k] = arr[j];
            j++;
            k++;
        }
    }

    // When the right subarray is run out of elements but the left subarray is having data-
    while (i <= mid) {
        NewArr[k] = arr[i];
        i++;
        k++;
    }

    // When the left subarray is run out of elements but the right subarray is having data-
    while (j <= end) {
        NewArr[k] = arr[j];
        j++;
        k++;
    }

    CopyFromNewArrToOriginalArr(NewArr, arr + start, end - start + 1);
}

void MergeSort(int arr[], int start, int end) {
    
    if (start < end) 
	{
    	// Dividing the array here-
        int mid = (start + end) / 2;
        MergeSort(arr, start, mid);
        MergeSort(arr, mid + 1, end);
        //conquering the array-
        Merge(arr, start, end, mid);
    }
}

int main() {
    int size;
    cout << "Enter the size=";
    cin >> size;

    int arr[size];

    cout << "Enter the elements in the array=\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    MergeSort(arr, 0, size - 1);

    cout << "The sorted array using merge sort=\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}

