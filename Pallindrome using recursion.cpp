#include<iostream>

using namespace std;

void ReverseString(string &str,int start,int end){
    if(start>=end){
        return;
    }
    else{
        swap(str[start],str[end]);
        ReverseString(str,start+1,end-1);
    }
}
void pallindrome(string str,string str2){
    if(str==str2){
        cout<<"\nThe string is pallindrome";
    }
    else{
        cout<<"\nNot pallindrome";
    }
}

int main(){
    
    string str="11122111 ";
    cout<<"String is, str=";
    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
    
    string str2=str;
    
    cout<<"\nReversed string, str2=";
    ReverseString(str2,0,str.length()-1);
    
    
    for(int i=0;i<str2.length();i++){
        cout<<str2[i];
    }
    
    pallindrome(str,str2);
}
