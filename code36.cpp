//Day before N days
#include<iostream>
using namespace std;
int main(){
    int NUM;
    int DAYS;
    cout<<"enter the day :";
    cin>>DAYS;
    cout<<"enter the number to go back :";
    cin>>NUM;
    int n=NUM%7;//for range to 0-6
    int ans=(DAYS-n)+7;//+7 for making the value positive 
    cout << "the ans is :"<<ans;

}