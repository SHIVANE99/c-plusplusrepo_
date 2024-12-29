#include<iostream>
using namespace std;
int main(){
    static int a=5;
    a=6;
    cout << a;
}