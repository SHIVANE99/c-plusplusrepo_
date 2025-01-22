#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int d;
    int n;
    int num;
    cout<<"Enter the first term of the AP::";
    cin>>a;
    cout<<"Enter the common difference of the AP::";
    cin>>d;
    cout<<"Enter the nth term you want to find ::";
    cin>>n;
    num=a+(n-1)*d;
    cout<<"The nth term is "<<num;


}