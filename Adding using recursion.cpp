#include <iostream>

using namespace std;

// Parameterized way

void ADD(int n, int sum){
    if(n<0){
        cout<<sum;
        return;
    }
    
    ADD(n-1,sum+n);
}

// Functional Recursion way

int ADD(int n){
    if(n==0){
        return 0;
    }
    
    return n+ADD(n-1);
}

int main()
{
    ADD(10,0);

    cout<<"\n"<<ADD(10);
    return 0;
}
