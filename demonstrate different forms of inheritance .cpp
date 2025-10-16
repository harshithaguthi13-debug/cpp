//1. Single Inheritance:   
#include <iostream>  
using namespace std;  
class Parent  
{  
    public:
 
Programming with C++ Lab                                                                                     Page No.:                   
    void display() {  
        cout << "This is Parent class" << endl;  
    } 
}; 
class Child :  
public Parent  
{  
    public: 
    void show() {  
        cout << "This is Child class" << endl;  
    }  
};  
int main() { 
    cout<<"24B11AI138"<<endl; 
    Child obj;  
    obj.display();  
    obj.show();      
    return 0;  
} 
//2 .Multiple Inheritance :  
#include <iostream>  
using namespace std;  
class Father {  
public:  
void quality() {  
cout << "Quality from Father" << endl;  
}  
};  
class Mother {  
public:  
void skill() {  
cout << "Skill from Mother" << endl;  
}  
};
 
Programming with C++ Lab                                                                                     Page No.:                   
class Child : public Father, public Mother {  
public: 
void own() {  
    cout << "Own feature of Child" << endl;  
}  
};  
int main() {  
    cout<<"24B11AI138"<<endl; 
    Child obj;  
    obj.quality();   
    obj.skill();     
    obj.own();     
return 0; 
} 
//3. Multilevel Inheritance :  
#include <iostream>  
using namespace std;  
class Grandparent {  
public:  
void heritage() {  
cout << "This is Grandparent heritage" << endl;  
}  
};  
class Parent : public Grandparent {  
public:  
void property() {  
cout << "This is Parent property" << endl;  
}  
};  
class Child : public Parent {  
public:  
void own() {  
cout << "This is Child's own feature"<<endl; 
} 
 
Programming with C++ Lab                                                                                     Page No.:                   
};  
int main() {  
    cout<<"24B11AI138"<<endl; 
    Child obj;  
    obj.heritage();  
    obj.property(); 
    obj.own();       
    return 0;  
} 
//4. Hierarchical Inheritance :  
#include <iostream>  
using namespace std;  
class Parent {  
public:  
void commonFeature() {  
    cout << "Common feature from Parent" << endl;  
}  
};  
class Child1 : public Parent {  
public:  
void feature1() {  
    cout << "Feature of Child1" << endl;  
}  
};  
class Child2 : public Parent {  
public:  
void feature2() {  
    cout << "Feature of Child2" << endl;  
}  
};  
int main() {  
    cout<<"24B11AI138"<<endl; 
    Child1 c1;  
    c1.commonFeature(); 
 
Programming with C++ Lab                                                                                     Page No.:                   
    c1.feature1();  
    Child2 c2;  
    c2.commonFeature();  
    c2.feature2();  
    return 0;  
} 
//5. Hybrid Inheritance:  
#include <iostream>  
using namespace std;  
class A {  
public:  
void showA() {  
cout << "Class A feature" << endl;  
}  
};  
class B : public A {  
public: 
void showB() {  
cout << "Class B feature" << endl;  
}  
};  
class C : public A {  
public:  
void showC() {  
cout << "Class C feature" << endl;  
}  
};  
class D : public B, public C {  
public:  
void showD() {  
    cout << "Class D feature" << endl;  
}  
};  
int main() { 
   
Programming with C++ Lab                                                                                     Page No.:                   
    cout<<"24B11AI138"<<endl; 
    D obj;  
    obj.showB();  
    obj.showC();  
    obj.showD();  
    return 0;  
} 
