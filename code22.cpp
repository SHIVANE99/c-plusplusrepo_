#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year to check :";
    cin>>year;
    if(year %400==0){
        cout<<"its a leap year";

    }
    else if(year%100==0){
        cout<<"not a leap year";

    }
    else if(year%4==0){
        cout<<"its a leap year";
    }
    else{
        cout<<"its not a leap year";
    }

}