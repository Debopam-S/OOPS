#include<iostream>
using namespace std;
inline int product(int a, int b) {
    return a*b;
}
int main() {
    int a, b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"The product is: "<<product(a, b);
}
/*
OUTPUT:
Enter the value of a and b: 
7 8
The product is: 56
*/