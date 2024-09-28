#include <iostream>
#include <vector>
using namespace std;

void SubSequence(int i, vector<int>& V, vector<int>& current, int size) {
    if (i >= size) {
        cout<<"[";
        for (int j = 0; j < current.size(); ++j) {
            cout << current[j] << " ";
        }
        cout<<"]";
        
    if(current.size()==0){
        cout<<"[]";
    }
        cout << endl;
        return;
    }
    
    // Include the current element
    current.push_back(V[i]);
    SubSequence(i + 1, V, current, size);
    
    // Exclude the current element
    current.pop_back();
    SubSequence(i + 1, V, current, size);
}

int main() {
    vector<int> V = {3, 1, 2};
    int size = V.size();
    vector<int> current;
    
    SubSequence(0, V, current, size);

    return 0;
}

