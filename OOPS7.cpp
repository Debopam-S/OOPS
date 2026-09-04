#include<iostream>
#include<cstring>
using namespace std;
class Hero {
  public:
  int health;
  char level;
  char *name;
  void print() {
    cout<<endl;
    cout<<"Name: "<<this -> name<<", ";
    cout<<"Health: "<<this -> health<<", ";
    cout<<"Level: "<<this -> level<<endl;
    cout<<endl;
  }
  void setHealth(int h) {
    health = h;
  }
 void setLevel(char ch) {
   level = ch;
  }
  Hero() {
    name = new char[100];
  }
  void setName(char name[]) {
    strcpy(this->name, name);
  }
};
int main() {
  Hero hero1;
  hero1.setHealth(80);
  hero1.setLevel('S');
  char name[7] = "Babbar";
  hero1.setName(name);
  hero1.print();
  Hero hero2(hero1);
  hero2.print();
  hero1.name[0] = 'G';
  hero1.print();
  hero2.print();
}

/*
OUTPUT:

Name: Babbar, Health: 80, Level: S


Name: Babbar, Health: 80, Level: S


Name: Gabbar, Health: 80, Level: S


Name: Gabbar, Health: 80, Level: S


*/