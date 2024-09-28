#include <iostream>
#include<vector>
using namespace std;

void SumOfSubsequence(int i, vector<int>&V1,vector<int>Current, int &Sum,int sum,int &size){
    if(i==size){
        if(sum==Sum){
            cout<<"[";
            for(auto i:Current){
                cout<<i<<" ";
            }
            cout<<"]";
        }
        
        return;
    }
    
    Current.push_back(V1[i]);
    sum=sum+V1[i];
    SumOfSubsequence(i+1,V1,Current,Sum,sum,size);
    // remove
    Current.pop_back();
    sum=sum-V1[i];
    SumOfSubsequence(i+1,V1,Current,Sum,sum,size);
    
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