#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=10;
    cout<<a<<endl;
    cout<<setw(5);
    cout<<setfill('#');
    cout<<a<<endl;
    cout<<left;
    cout<<setw(5);
    cout<<a<<endl;
}