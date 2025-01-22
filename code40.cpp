#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int r;
    int n;
    int num;
    cout << "Enter the 1st term of the gp";
    cin>>a;
    cout << "Enter the common ratio ::";
    cin>>r;
    cout << "Enter the nth term of the gp::";
    cin>>n;
    num=a*pow(r,n-1);
    cout << "Enter the nth term of the gp is ::"<<num;
    

}