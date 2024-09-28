#include<iostream>
using namespace std;

bool ChackPallindrome(string S,int size,int i){
    if(S[i]!=S[size-1]){
        return false;
    }
    
    if(i>=size/2){
        return false;
    }
    
    ChackPallindrome(S,size-1-i,i+1);
    return true;
}

int main(){
    string S="lililil";
    string S2="jhgvaksjf";
    
    int size=S.size();
    int size2=S2.size();
    if(ChackPallindrome(S,size,0)){
        std::cout << "It is pallindrom" << std::endl;
    }
    else{
        cout<<"It is not pallindrom\n";
    }
    
    if(ChackPallindrome(S2,size2,0)){
        std::cout << "It is pallindrom" << std::endl;
    }
    else{
        cout<<"It is not pallindrom";
    }
}
