#include <iostream> 
#include <vector> 
#include <list> 
using namespace std; 
int main() 
{ 
 
vector<int> v; 
v.push_back(10); 
v.push_back(20); 
v.push_back(30); 
cout << "Vector elements: "; 
for (auto x : v) 
cout << x << " "; 
cout << endl; 
v.pop_back(); 
cout << "After deletion: "; 
for (auto x : v) 
cout << x << " "; 
cout << endl; 
cout << "First element in vector: " << v[0] << endl; 
list<int> l; 
l.push_back(100); 
l.push_front(50); 
l.push_back(150); 
cout << "\nList elements: "; 
for (auto x : l) 
cout << x << " "; 
cout << endl; 
l.pop_front(); 
cout << "After deletion: "; 
for (auto x : l) 
cout << x << " "; 
return 0;
}
