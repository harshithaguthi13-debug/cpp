#include <iostream> 
using namespace std; 
class Complex { 
int real, imag; 
public: 
Complex(int r=0, int i=0) { 
real = r; 
imag = i; 
} 
friend Complex operator - (const Complex &c1, const Complex &c2); 
void display() { 
cout << real << " + " << imag << "i" << endl; 
} 
}; 
Complex operator - (const Complex &c1, const Complex &c2) { 
return Complex(c1.real - c2.real, c1.imag - c2.imag); 
} 
int main() { 
Complex c1(8, 10), c2(5, 6); 
Complex c3 = c1 - c2; 
 
cout << "Result of Subtraction: "; 
c3.display(); 
cout<<”Harshitha”<<endl; 
cout<<”24B11AI138<<endl; 
return 0; 
} 
