#include<iostream>
using namespace std;
class Hero {
    public:
    int health = 60;
    char level = 'A';
};
int main() {
    Hero Ramesh;
    Hero*Ram = new Hero;
    cout<<"Health: "<<(*Ram).health<<endl;
    cout<<"Level: "<<(*Ram).level<<endl;
}

/*
OUTPUT:
Health: 60
Level: A
*/