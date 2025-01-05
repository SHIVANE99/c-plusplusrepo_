#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age";
    cin>>age;
    switch (age)
    {
    case 18:
    cout<<"you are 18";
        break;
    
    default:
    cout<<"bye";
        break;
    }
}