#include <iostream>
using namespace std;
class Hero {
    public:
    int health;
    char level;
    Hero(int health, char level) {
        this -> health = health;
        this -> level = level;
    }
    Hero(Hero& temp){
        cout<<"Copy ho gya"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }
};
int main() {
    Hero Ramesh(90, 'A');
    cout<<"Ramesh's health: "<<Ramesh.health<<endl;
    cout<<"Ramesh's level: "<<Ramesh.level<<endl;
    Hero Shyam(Ramesh);
     cout<<"Shyam's health: "<<Shyam.health<<endl;
    cout<<"Shyam's level: "<<Shyam.level<<endl;
}

/*
OUTPUT:
Ramesh's health: 90
Ramesh's level: A
Copy ho gya
Shyam's health: 90
Shyam's level: A
*/