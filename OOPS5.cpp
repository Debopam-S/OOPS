#include <iostream>
using namespace std;
class Hero {
    public:
    int health;
    char level;
    Hero(int health, char level) {
        this -> health = health;
        this -> level = level;
        cout<<"Health: "<<health<<endl;
        cout<<"Level: "<<level<<endl;
    }
};
int main() {
    Hero Ram(10, 'S');
}

/*
OUTPUT:
Health: 10
Level: S
*/