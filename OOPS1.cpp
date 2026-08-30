#include<iostream>
using namespace std;
class Student {
    public:
    int health = 80;
    char level = 'A';
};
int main() {
    Student Ram;
    cout<<"Health: "<<Ram.health<<endl;
    cout<<"Level: "<<Ram.level<<endl;
}

/*
OUTPUT:
Health: 80
Level: A
*/