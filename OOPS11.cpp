#include<iostream>
using namespace std;
int area(int a, int b) {
    return a*b;
}
int area(int c) {
    return c*c;
}
int area1(int d = 8, int e = 9) {
    return d*e;
}
int main() {
    cout<<"The area of the square: "<<area(5)<<endl;
    cout<<"The area of the rectangle: "<<area(5, 4)<<endl;
    cout<<"The area of the rectangle1: "<<area1(10, 12)<<endl;
    cout<<"The area of the rectangle2: "<<area1(); //Default arguments
    return 0;
}

/*
OUTPUT:
The area of the square: 25
The area of the rectangle: 20
The area of the rectangle1: 120
The area of the rectangle2: 72
*/