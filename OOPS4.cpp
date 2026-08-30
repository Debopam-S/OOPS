#include<iostream>
using namespace std;
class Hero {
    public:
    Hero() {
        cout<<"Constructor called."<<endl;
    }
    int health = 70;
    char level = 'S';
};
int main() {
    Hero Ramesh;
    cout<<"Health: "<<Ramesh.health<<endl;
    cout<<"Level: "<<Ramesh.level<<endl;
}

/*
OUTPUT:
Constructor called.
Health: 70
Level: S
*/