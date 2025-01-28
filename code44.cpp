#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"enter 3 numbers ::";
    cin>>n1>>n2>>n3;
    if(n1>n2 && n1>n3){
        cout<<"largest number is :"<<n1;
    }
    else if(n2>n1 && n2>n3){
        cout<<"largest number is :"<<n2;
    }
    else{
        cout<<"largest number is :"<<n3;
    }
}