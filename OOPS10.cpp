#include<iostream>
using namespace std;
class Complex{
    int a, b;
    public:
    void SetNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }
    void PrintNumber() {
        cout<<"Your number is: "<<endl;
        cout<<a<<"+"<<b<<"i";
        cout<<endl;
        cout<<endl;
    }
    friend Complex SumComplex(Complex o1, Complex o2);
};
Complex SumComplex(Complex o1, Complex o2) {
    Complex o3;
    o3.SetNumber((o1.a+o2.a), (o1.b+o2.b));
    return o3;
}
int main() {
    Complex C1, C2, sum;
    C1.SetNumber(40, 50);
    C1.PrintNumber();
    C2.SetNumber(20, 30);
    C2.PrintNumber();
    sum = SumComplex(C1, C2);
    sum.PrintNumber();
    return 0;
}

/*
OUTPUT:
Your number is: 
40+50i

Your number is: 
20+30i

Your number is: 
60+80i
*/
