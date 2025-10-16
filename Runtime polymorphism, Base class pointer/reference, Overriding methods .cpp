#include <iostream> 
using namespace std; 
class Student { 
string name; 
int age; 
public: 
Student(string n, int a) { 
name = n; 
age = a; 
} 
Student(const Student &s) { 
name = s.name; 
age = s.age; 
} 
void display() { 
cout << "Name: " << name << endl; 
cout << "Age : " << age << endl; 
} 
}; 
int main() { 
Student s1("harshitha", 18);
Student s2 = s1; 
cout << "Original Object:\n"; 
s1.display(); 
cout << "\nCopied Object:\n"; 
s2.display(); 
return 0; 
} 
