#include <iostream>
using namespace std;

bool isSafe(int arr[][4], int x, int y, int size){
    for(int row = 0; row < x; row++){
        if(arr[row][y] == 1){
            return false;
        }
    }
    
    // checking left diagonal
    int row = x, col = y;
    
    while(row >= 0 && col >= 0){
        if(arr[row][col] == 1){
            return false;
        }
        row--;
        col--;
    }
    
    // checking right diagonal
    row = x;
    col = y;
    
    while(row >= 0 && col < size){
        if(arr[row][col] == 1){
            return false;
        }
        row--;
        col++;
    }
    
    return true;
}

bool NQueen(int arr[][4], int x, int size){
    if(x >= size){
        return true;
    }
    
    for(int col = 0; col < size; col++){
        if(isSafe(arr, x, col, size)){
            arr[x][col] = 1;
            
            if(NQueen(arr, x + 1, size)){
                return true;
            }
            
            else{
                arr[x][col] = 0;  // backtracking
            }
        }
    }
    
    return false;
}


int main()
{
    int size = 4;
    
    int arr[4][4];
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            arr[i][j] = 0;
        }
    }
    
    cout << "Printing the initial array before positioning the queens=\n";
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    
    
    cout << "Printing the initial array after positioning the queens=\n";
    if(NQueen(arr, 0, size)==true){
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                cout << arr[i][j] << "\t";
            }
        cout << "\n";
        }
    }
    else{
        cout << "No solution exists!\n";
    }

    return 0;
}

