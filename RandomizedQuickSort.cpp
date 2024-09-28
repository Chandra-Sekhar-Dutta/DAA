#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int Partition(int arr[],int size,int first, int last){
    int pivot=arr[first];
    int i, j;
    // the purpose of i and j is-
    // 1) increment i until arr[i]>pivot or if arr[i]<pivot,i++
    // 2) decrement j until arr[j]<pivot or if arr[j]>pivot,j--
    // 3) then swap arr[i] with arr[j]
    // 4) when i>j, don't swap arr[i] with arr[j], instead swap pivot with arr[j]. we get the new pivot value/point
    i=first;
    j=last;
    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        
        //when i++ and j-- is not occuring the this if statement will be executed
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    
    swap(arr[first],arr[j]);
    return j;
    //this is executed when i>j and new pivot is set at arr[j] but we are not swaping pivot with arr[j]
    // instead we are swapping with arr[first] as we recursively call the function, pivot will always be arr[first]
    // and first will be changed everythime
}

void QuickSort(int first, int last, int arr[], int size) {
    if (first < last) {
        
        int random = first + rand() % (last - first + 1);
        //so that the pivot is a random value from the array to reduce the time complexity during the worst case scenario


    // Swap the pivot element with the element at random index
    swap(arr[first], arr[random]);
        
        int j = Partition(arr, size, first, last);
        QuickSort(first, j, arr, size);
        QuickSort(j + 1, last, arr, size);
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
    
    int first = 0;
    int last = size - 1;
    
    QuickSort(first, last, arr, size);
    
    cout << "The sorted array-\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i]<<" ";
    }

    return 0;
}

