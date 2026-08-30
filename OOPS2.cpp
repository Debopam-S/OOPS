#include<iostream>
using namespace std;
class Hero {
    private:
    int health = 70;
    char level = 'S';
    public:
    int getHealth() {
        return health;
    }
    char getlevel() {
        return level;
    }
};
int main() {
   Hero Shyam;
    cout<<"Health: "<<Shyam.getHealth()<<endl;
    cout<<"Level: "<<Shyam.getlevel()<<endl;
}

/*
OUTPUT:
Health: 70
Level: S
*/