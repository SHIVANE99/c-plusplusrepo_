#include<iostream>
int main(){
    std::string name;
    std::cout<<"Hey! user enter your name ";
    getline(std::cin,name);
    std::cout<<"welcome "<<name<<" sir";
}