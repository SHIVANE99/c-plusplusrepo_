#include<iostream>
using namespace std;
int main(){
    int a=20;
    int b=25;
    cout<<a<<" "<<b<<endl;
    cout<<std::showbase;
    cout<<std::uppercase;
    cout<<std::hex;
    cout<<a<<" "<<b<<endl;
    cout<<std::oct;
    cout<<a<<" "<<b<<endl;
    cout<<std::dec;
    cout<<a<<" "<<b<<endl;

}