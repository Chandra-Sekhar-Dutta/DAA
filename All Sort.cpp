#include <iostream>
#include"Merge Sort.h"

using namespace std;

const int Size=5;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


void printArr(int arr[],int Size){
    for(int i=0;i<Size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}

void bubbleSort(int arr[],int Size){
    int counter=1;
    while(counter<Size){
        for(int j=0;j<Size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        counter++;
    }
    cout<<"After Bubble Sort-\n";
    printArr(arr,Size);
}

void insertionSort(int arr[],int Size){
    for(int i=1;i<Size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<"After Insertion Sort-\n";
    printArr(arr,Size);
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++){
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[i]) {
                swap(arr[j], arr[i]);
            }
        }
    }
    cout<<"After Selection Sort-\n";
    printArr(arr,Size);
}


int main()
{
    int arr[Size];
    
    cout<<"Enter the 5 elements=";
    for(int i=0;i<Size;i++){
        cin>>arr[i];
    }
    
    bubbleSort(arr,Size);
    selectionSort(arr,Size);
    insertionSort(arr,Size);
    
    MergeSort(arr[], start, end);
    Merge(arr[], start, end, mid);
    
        for(int i=0;i<Size;i++){
        cin>>arr[i];
    }
    return 0;
}
