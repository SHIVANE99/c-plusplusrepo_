#include<iostream>
using namespace std;
int main(){
    char op;
    int x,y;
    cout<<"enter 2 integers ";
    cin>>x>>y;
    cout<<"enter operator";
    cin>>op;
    if (op=='+'){
        cout<<x+y;
    }
    else if(op=='-'){
        cout<<x-y;
    }
    else if(op=='*'){
        cout<<x*y;

    }
}