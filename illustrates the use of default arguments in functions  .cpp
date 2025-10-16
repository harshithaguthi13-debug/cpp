#include<iostream> 
using namespace std; 
class DispDemo 
{ 
 public: 
  void display() 
  { 
       cout << "Nothing to display" << endl; 
  } 
  void display(string msg) 
  { 
       cout << "I am having something to display:" << msg << endl; 
  } 
  void display(int age) 
  { 
       cout << "Age:" <<age << endl; 
  } 
  void display(string msg,int age) 
  { 
         cout << "Hello" << msg <<"Age:" <<age << endl; 
  } 
  int display(int age, int grace) 
  {
            return (age+grace); 
  } 
  void show(int c,int a = 10,int b = 20) 
  { 
        cout << "A:" << a <<" B:" <<b  << " C:" << c<< endl; 
  } 
}; 
int main() 
{ 
       DispDemo dd; 
       dd.display(30); 
       dd.display(); 
       dd.display("Welcome to C++ programming"); 
       dd.display("Harshitha",19); 
       cout << " Result:" << dd.display(30, 5) << endl; 
       //dd.show(); 
       dd.show(50); 
       dd.show(100, 200); 
       return 0; 
} 
