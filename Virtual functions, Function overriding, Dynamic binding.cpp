#include <iostream> 
using namespace std; 
class Student { 
string name; 
int age; 
public: 
Student() { 
name = "harshi"; 
age = 18; 
} 
Student(string n, int a) { 
name = n; 
age = a; 
} 
void display() { 
cout << "Name: " << name << endl; 
cout << "Age : " << age << endl; 
} 
}; 
 
int main() { 
Student s1; 
Student s2("Harshitha", 20); 
cout << "Default Constructor Output:\n"; 
s1.display(); 
cout << "\nParameterized Constructor Output:\n"; 
s2.display(); 
return 0; 
} 
