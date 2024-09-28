#include <iostream>
using namespace std;

void reverseStringRecursion(string &str, int start, int end) { 
    if (start >= end)
        return;
    
    // Swap characters at start and end indices
    swap(str[start], str[end]);//swap(parameter1, parameter2) is a predefined function in cpp
    
    // Recursive call with updated indices
    reverseStringRecursion(str, start + 1, end - 1);
}

int main() {
    string str = "Hello World!";
    cout<<"The string is= ";
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
    cout<<"\n";
    
    // Call the recursive function to reverse the string
    reverseStringRecursion(str, 0, str.length() - 1);
    
    cout << "Reversed String: " << str << endl;
    
    return 0;
}

