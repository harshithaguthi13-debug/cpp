#include <iostream> 
using namespace std; 
class Complex { 
int real, imag; 
public: 
Complex(int r=0, int i=0) { 
real = r; 
imag = i; 
} 
Complex operator + (const Complex &c) { 
Complex temp; 
temp.real = real + c.real; 
temp.imag = imag + c.imag; 
return temp; 
} 
void display() { 
cout << real << " + " << imag << "i" << endl; 
} 
}; 
int main() { 
Complex c1(3, 4), c2(5, 6);
 
Complex c3 = c1 + c2; 
cout << "Result of Addition: "; 
c3.display(); 
cout<<”Harshitha”<<endl; 
cout<<”24B11AI138”<<endl; 
return 0; 
} 
