
//Compute quotient and remainder
#include<iostream>
using namespace std;
int dividend;
int divisor;
int main(){
    cout<< "enter dividend ";
    cin>>dividend;
    cout<<"enter divisor";
    cin>>divisor;
    int quotient=dividend/divisor;
    int remainderr=dividend%divisor;
    cout<<"the quotient is :"<<quotient<<endl;
    cout<<"the remainder is :"<<remainderr;
    
    
    }