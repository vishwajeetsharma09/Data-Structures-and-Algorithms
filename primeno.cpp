#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ente the number";
    cin>>n;

    bool isPrime = true;
    // for(int i=2;i<=n;i++){
    //     if(n % i == 0){
    //         isPrime = false;
    //     }
    // }
    //optimise solution -->
    for(int i=2;i*i<=n;i++){
        if(n % i == 0){
            isPrime = false;
        }
    }
    
    if(isPrime == true){
        cout<<"no is prime";
    }else{
        cout<<"no is not prime ";
    }
    return 0;
}