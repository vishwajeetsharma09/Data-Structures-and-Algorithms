#include<iostream>
using namespace std;

int main(){

     int n, sum , i=0;
     sum = 0;
     cout<<"enter the number";
     cin>>n;
    //  for(int i=0;i<=n;i++){
    //     sum =sum + i;

    //  }
    while(i<=n){
        sum += i;
        i++;
    }
     cout<<"the sum is "<<sum<<endl;

    //  return 0;
     
}