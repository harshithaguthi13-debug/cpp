#include<iostream> 
using namespace std; 
class DispDemo 
{ 
    public: 
    void display() 
    { 
        cout<<"Nothing to say"<<endl; 
    } 
    void display(string msg) 
    { 
        cout<<"I have something to say :"<<msg<<endl; 
    } 
    void display(int age) 
    { 
        cout<<"Age: "<<age<<endl; 
    } 
    void display(string msg,int age) 
    { 
        cout<<"Hi "<<msg<<endl; 
        cout<<"Age :"<<age<<endl; 
    } 
    int display(int age, int grace)
    { 
        return (age+grace); 
    } 
};     
int main() 
{ 
    DispDemo dd; 
    dd.display(25); 
    dd.display(); 
    dd.display("Welcome to c++ progrmming"); 
    dd.display("Harshitha",19); 
    cout<<"result:"<<dd.display(19,1); 
    return 0; 
}
