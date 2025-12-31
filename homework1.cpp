#include<iostream>
using namespace std;
int main(){
    //sum all the number from 1 to N divisble by 3
//  int n,sum=0;
//  cout<<"enter the number ";
//  cin>>n;
//  for(int i = 3; i <= n; i++){
//     if(i % 3 == 0){
//         sum += i;
//     }
//  }
//  cout<<sum;

int n,fact=1;
cout<<"Enter the number for Fatorial";
cin>>n;
for(int i = 1; i <= n; i++ ){
    fact = fact*i;
}
cout<<fact;
 
}