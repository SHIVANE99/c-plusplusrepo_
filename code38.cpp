#include<iostream>
using namespace std;
int sum=0;
int num;
int main(){
    cout<<"Enter the number you want to find the sum upto::";
    cin>>num;
    for (int i=1;i<=num;i++){
        sum=sum+i;
    }
    cout<<"the sum is ::"<<sum;
    

}