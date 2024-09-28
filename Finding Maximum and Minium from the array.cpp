#include <iostream>

using namespace std;

int MinElementOfArray(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
     return min;
}

int MaxElementOfArray(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
     return max;
}

int main()
{
    int size;
    cout<<"Enter the size of the array=";
    cin>>size;
    
    int arr[size];
    cout<<"Enter the elements=";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"The Minimum value of the array ="<<MinElementOfArray(arr,size)<<"\n";
    cout<<"The Maximum value of the array ="<<MaxElementOfArray(arr,size);

    return 0;
}
