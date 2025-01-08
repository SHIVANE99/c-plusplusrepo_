#include<iostream>
#include<limits>
using namespace std;
int main(){
    cout<<"the range of integer is "<<numeric_limits<int>::min()<<" to "<<numeric_limits<int>::max()<<endl;
    cout<<"the range of short int is "<<numeric_limits<short int>::min()<<" to "<<numeric_limits<short int>::max()<<endl;
    cout<<"the range of long int is "<<numeric_limits<long int>::min()<<" to "<<numeric_limits<long int>::max()<<endl;

}