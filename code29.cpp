#include<iostream>
using namespace std;
int main(){
    int a;
    int mul=1;
    cout<<"enter number::";
    cin>>a;
    for(int i=1;i<=a;i++){
        mul=mul*i;


    }
    cout <<"factorial is "<<" "<<mul;
}