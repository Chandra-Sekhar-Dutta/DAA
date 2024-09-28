#include <iostream>

using namespace std;

int LinearSearch(int target, int size, int arr[]){
    if(arr[size-1]==target){
        return size-1;
    }
    
    if(size<0){
        return -1;
    }
    
    return LinearSearch(target,size-1,arr);
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int target=6;
    
    cout<<LinearSearch(target,size,arr);

    return 0;
}
