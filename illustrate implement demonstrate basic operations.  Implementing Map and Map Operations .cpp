#include <iostream> 
#include <map> 
using namespace std; 
int main() 
{ 
map<int, string> fruits; 
 
fruits[1] = "Apple"; 
fruits[2] = "Banana"; 
fruits[3] = "Mango"; 
cout << "Fruits list:\n"; 
 
for (auto x : fruits) 
{ 
cout << x.first << " -> " << x.second << endl; 
}cout << "\nFruit with key 2: " << fruits[2] << endl; 
fruits.erase(1); 
cout << "\nAfter deleting key 1:\n"; 
for (auto x : fruits) 
{ 
cout << x.first << " ->"<<x.second << endl; 
}
return 0; 
} 
