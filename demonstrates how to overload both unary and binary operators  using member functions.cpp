#include<iostream> 
using namespace std; 
class complex 
{ 
    private: 
    int real; 
    int imaj; 
    public: 
    complex(int r,int i) : real(r) , imaj(i) { } 
    complex operator-() 
    { 
        return complex(-real,-imaj); 
    } 
    complex operator+(complex& obj) 
    { 
        return complex(real+obj.real,imaj+obj.imaj); 
    } 
    string display() 
    { 
        return std::to_string(real)+"+"+std::to_string(imaj)+"i\n"; 
    } 
}; 
int main() 
{ 
    cout<<"24B11AI138"<<endl; 
    complex c1(10,20); 
    cout<<"complex number c1:"<<c1.display(); 
    complex c2(30,50); 
    cout<<"complex number c2:"<<c2.display();
 
Programming with C++ Lab                                                                                     Page No.:                   
    complex c3 = -c1; 
    cout<<"complex number c3:"<<c3.display(); 
    complex c4 = c1+c2; 
    cout<<"complex number c4:"<<c4.display(); 
    return 0; 
}
