#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<" enter the char : ";
    cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        cout<<"Lowercase\n";
    }
    else{
        cout<<"uppercase";
    }
}