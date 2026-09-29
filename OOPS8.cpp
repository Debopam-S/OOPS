#include<iostream>
using namespace std;
class complex {
    int real, imag;
    public:
    complex() {
        real = 0;
        imag = 0;
    }
    void input() {
        cout<<"Enter real and imaginary: "<<endl;
        cin>>real>>imag;
        cout<<endl;
    }
    complex operator+(complex obj) {
        complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void display() {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main() {
   complex c1, c2, c3;
    cout<<"For first number: "<<endl;
    c1.input();
    cout<<"For second number: "<<endl;
    c2.input();
    c3 = c1 + c2;
    cout<<"Additional result is: "<<endl;
    c3.display();
    return 0;
}
/*
OUTPUT:
For first number: 
Enter real and imaginary: 
5 10

For second number: 
Enter real and imaginary: 
10 20

Additional result is: 
15+30i
*/