#include <iostream>
#include<vector>
using namespace std;

bool SumOfSubsequence(int i, vector<int>&V1,vector<int>Current, int &Sum,int sum,int &size){
    if(i==size){
        if(sum==Sum){
            cout<<"[";
            for(auto i:Current){
                cout<<i<<" ";
            }
            cout<<"]";
            return true;
        }
        
        else{
            return false;
        }
    }
    
    Current.push_back(V1[i]);
    sum=sum+V1[i];
    if(SumOfSubsequence(i+1,V1,Current,Sum,sum,size)==true){
        return true;
    }
    // remove
    Current.pop_back();
    sum=sum-V1[i];
    if(SumOfSubsequence(i+1,V1,Current,Sum,sum,size)==true){
        return true;
    }
    
    return false;
}

int main()
{
    vector<int>V1={3,2,4,1,5};
    int size=V1.size();
    
    vector<int>Current;
    
    int Sum=5;
    
    cout<<"The subset is: "<<endl;
    SumOfSubsequence(0,V1,Current,Sum,0,size);

    return 0;
}


// recursive tree


// SumOfSubsequence(0, {3, 2, 4, 1, 5}, {}, 5, 0, 5)
// |
// ├── Include 3: Subsequence [3], sum = 3
// |   |
// |   ├── Include 2: Subsequence [3, 2], sum = 5 (valid)
// |   |
// |   └── Exclude 2: Subsequence [3], sum = 3
// |       |
// |       ├── Include 4: Subsequence [3, 4], sum = 7 (invalid)
// |       |
// |       └── Exclude 4: Subsequence [3], sum = 3
// |           |
// |           ├── Include 1: Subsequence [3, 1], sum = 4
// |           |   |
// |           |   ├── Include 5: Subsequence [3, 1, 5], sum = 9 (invalid)
// |           |   |
// |           |   └── Exclude 5: Subsequence [3, 1], sum = 4 (invalid)
// |           |
// |           └── Exclude 1: Subsequence [3], sum = 3
// |               |
// |               ├── Include 5: Subsequence [3, 5], sum = 8 (invalid)
// |               |
// |               └── Exclude 5: Subsequence [3], sum = 3 (invalid)
// |
// └── Exclude 3: Subsequence [], sum = 0
//     |
//     ├── Include 2: Subsequence [2], sum = 2
//     |   |
//     |   ├── Include 4: Subsequence [2, 4], sum = 6 (invalid)
//     |   |
//     |   └── Exclude 4: Subsequence [2], sum = 2
//     |       |
//     |       ├── Include 1: Subsequence [2, 1], sum = 3
//     |       |   |
//     |       |   ├── Include 5: Subsequence [2, 1, 5], sum = 8 (invalid)
//     |       |   |
//     |       |   └── Exclude 5: Subsequence [2, 1], sum = 3 (invalid)
//     |       |
//     |       └── Exclude 1: Subsequence [2], sum = 2
//     |           |
//     |           ├── Include 5: Subsequence [2, 5], sum = 7 (invalid)
//     |           |
//     |           └── Exclude 5: Subsequence [2], sum = 2 (invalid)
//     |
//     └── Exclude 2: Subsequence [], sum = 0
//         |
//         ├── Include 4: Subsequence [4], sum = 4
//         |   |
//         |   ├── Include 1: Subsequence [4, 1], sum = 5 (valid)
//         |   |
//         |   └── Exclude 1: Subsequence [4], sum = 4
//         |       |
//         |       ├── Include 5: Subsequence [4, 5], sum = 9 (invalid)
//         |       |
//         |       └── Exclude 5: Subsequence [4], sum = 4 (invalid)
//         |
//         └── Exclude 4: Subsequence [], sum = 0
//             |
//             ├── Include 1: Subsequence [1], sum = 1
//             |   |
//             |   ├── Include 5: Subsequence [1, 5], sum = 6 (invalid)
//             |   |
//             |   └── Exclude 5: Subsequence [1], sum = 1 (invalid)
//             |
//             └── Exclude 1: Subsequence [], sum = 0
//                 |
//                 ├── Include 5: Subsequence [5], sum = 5 (valid)
//                 |
//                 └── Exclude 5: Subsequence [], sum = 0 (invalid)
