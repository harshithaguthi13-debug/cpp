#include <iostream> 
#include <string> 
using namespace std; 
class student 
{ 
private: 
    string name; 
    int age; 
public: 
    student(string n = "no name", int a = 0) 
    { 
        name = n; 
        age = a; 
    } 
    void setplayer(string n) 
    { 
 
Programming with C++ Lab                                                                                     Page No.:                   
        name = n; 
    } 
    void dispInfo() 
    { 
        cout << "Name: " << name << " Age: " << age << endl; 
    } 
}; 
int main() 
{ 
    student s("Harshitha", 17);\ 
    student* sp; 
    sp = &s; 
    sp->dispInfo(); 
    sp->setplayer("Harshitha"); 
    sp->dispInfo(); 
    student* sp1 = new student("G.Harshitha", 18); 
    sp1->dispInfo(); 
    delete sp1; 
    return 0; 
} 
