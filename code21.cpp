#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cout<<"enter the number upto which you want the sum : ";
    cin>>num;
    for(int i =1;i<=num;i++){
        sum+=i;
    }
    cout<<"the sum is :"<<sum<<endl;
}