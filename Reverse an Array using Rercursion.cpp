#include <iostream>
using namespace std;

void reverseArray(int arr[], int size,int first, int last){
    
    if(first>=last){
        return;
    }
    
    reverseArray(arr,size,first+1,last-1);
    swap(arr[first],arr[last]);
}

//also-
void reverseArray(int arr[], int size,int i){
    
    
    if(i>=size/2){
        return;
    }
    
    reverseArray(arr,size-i-1,i+1);
    swap(arr[i],arr[size-i-1]); 
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int first=0;
    int last=size-1;
    
    
    reverseArray(arr,size,first,last);
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    
    cout<<"\n";
    
    reverseArray(arr,size,first);\
    for(int i=0;i<size;i++){
    	cout<<arr[i]<<"\t";
	}

    return 0;
}
